#include <gazebo/gazebo.hh>
#include <gazebo/common/common.hh>
#include <gazebo/physics/physics.hh>

int main(int _argc, char **_argv)
{
  // Initialize gazebo.
  gazebo::setupServer(_argc, _argv);

  // Load a world
  gazebo::physics::WorldPtr world = gazebo::loadWorld("/usr/share/gazebo-9/worlds/crawler.world");

  gazebo::physics::ModelPtr model = world->ModelByName("krabbler_v5");
  if (!model)
  {
    std::cout << "Couldn't find model: " << std::endl;
    return -1;
  }
  gazebo::physics::JointPtr jt_l1_fl = model->GetJoint("jt_conn1_vl");
  jt_l1_fl->SetForce(1,100);


  // This is your custom main loop. In this example the main loop is just a
  // for loop with 2 iterations.
  for (unsigned int i = 0; i < 2; ++i)
  {
    // Run simulation for 100 steps.
    gazebo::runWorld(world, 100);
  }
  std::cout << "Crawler is at: " << model->gazebo::physics::Entity::WorldPose() << std::endl;
  // Close everything.
  gazebo::shutdown();
}
