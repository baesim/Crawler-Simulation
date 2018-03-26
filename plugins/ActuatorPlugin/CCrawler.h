#ifndef CCRAWLER_H
#define CCRAWLER_H
#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>
#include <ignition/math/Pose3.hh>
#include <iostream>

namespace gazebo
{
  class CCrawler : public ModelPlugin
  {
    public:
      CCrawler();

    public:
        virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);

        void get_sensors();
        void set_actuators();
        void reset_crawler();
        void on_iteration();

    private:
        physics::ModelPtr model; // Store the model

        /*******************
         * Store all Joints*
         * *****************/
        physics::JointPtr jt_l1_fl;
        physics::JointPtr jt_l1_fr;
        physics::JointPtr jt_l1_bl;
        physics::JointPtr jt_l1_br;
        physics::JointPtr jt_l2_fl;
        physics::JointPtr jt_l2_fr;
        physics::JointPtr jt_l2_bl;
        physics::JointPtr jt_l2_br;

        // Event for the begin of a gazebo iteration
        private: event::ConnectionPtr an_iteration;

        // Define zero position
        const ignition::math::Pose3d zero_pose;

  };

  // Register this plugin with the simulator
  GZ_REGISTER_MODEL_PLUGIN(CCrawler)
}
#endif // CCRAWLER_H
