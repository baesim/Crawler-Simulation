#include "CCrawler.h"

gazebo::CCrawler::CCrawler() : zero_pose(0,0,0,0,0,0) //ZeroPose set as (X,Y,Z,Roll, Pitch, Yaw)
{

}

void gazebo::CCrawler::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    model = _model;

    jt_l1_fl = model->GetJoint("jt_conn1_vl");
    jt_l1_fr = model->GetJoint("jt_conn1_vr");
    jt_l1_bl = model->GetJoint("jt_conn1_hl");
    jt_l1_br = model->GetJoint("jt_conn1_hr");

    jt_l2_fl = model->GetJoint("jt_conn2_vl");
    jt_l2_fr = model->GetJoint("jt_conn2_vr");
    jt_l2_bl = model->GetJoint("jt_conn2_hl");
    jt_l2_br = model->GetJoint("jt_conn2_hr");

    reset_crawler();

    //check if init was successfull
    std::cout << "Spawned Crawler at: " << this->model->gazebo::physics::Entity::WorldPose() << std::endl;
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

}
