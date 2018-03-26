#include "CCrawler.h"

gazebo::CCrawler::CCrawler() : zero_pose(0,0,0,0,0,0) //ZeroPose set as (X,Y,Z,Roll, Pitch, Yaw)
{

}

void gazebo::CCrawler::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    this->model = _model;
    //Outdated. This belongs in the NE Project!
    this->jt_l1_fl = _model->GetJoint("jt_conn1_vl");
    this->jt_l1_fr = _model->GetJoint("jt_conn1_vr");
    this->jt_l1_bl = _model->GetJoint("jt_conn1_hl");
    this->jt_l1_br = _model->GetJoint("jt_conn1_hr");

    this->jt_l2_fl = _model->GetJoint("jt_conn2_vl");
    this->jt_l2_fr = _model->GetJoint("jt_conn2_vr");
    this->jt_l2_bl = _model->GetJoint("jt_conn2_hl");
    this->jt_l2_br = _model->GetJoint("jt_conn2_hr");

    this->reset_crawler();

    //check if init was successfull
    std::cout << "Spawned Crawler at: " << this->model->gazebo::physics::Entity::WorldPose() << std::endl;


    // Get Iteration Callback
    this->an_iteration = event::Events::ConnectWorldUpdateBegin(std::bind(&CCrawler::on_iteration, this));
}

void gazebo::CCrawler::reset_crawler()
{
    model->SetRelativePose(zero_pose);
}

void gazebo::CCrawler::set_actuators()
{

}

void gazebo::CCrawler::get_sensors()
{
    std::cout << "Crawler is at: " << this->model->gazebo::physics::Entity::WorldPose() << std::endl;
}

void gazebo::CCrawler::on_iteration()
{
    //PSEUDO:
    /* Dieses Plugin muss in das NEAT-System eingebaut werden
     * NEAT muss zugriff auf dieses Plugin haben, dann gibt es eine variable: iteration_count
     * Wenn das individuum trainiert werden soll: NEAT setzt counter auf Null, gibt callback frei
     * In Callback: in jeder iteration: Get Sensors, feed values in net, eval net, set actors(vals)
     * In cllback: iteration_counter++
     * Überprüfen ob das zeitlich passt, wenn nein: Weniger iterationen pro sekunde.
     * -> Zeitmessung der Software und optimales Einstellen
     */
}
