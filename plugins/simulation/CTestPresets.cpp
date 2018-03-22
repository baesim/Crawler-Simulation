#include "CTestPresets.h"

gazebo::CTestPresets::CTestPresets()
{

}

void gazebo::CTestPresets::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
{
    if (_model->GetJointCount() == 0)
    {
       std::cerr << "Invalid joint count, plugin not loaded\n";
       return;
    }
    model = _model;

    model->GetJoint("jt_mech_vr")->SetParam("fmax", 0, 100.0);
    model->GetJoint("jt_mech_vr")->SetParam("vel", 0, -1.0);

    model->GetJoint("jt_mech_vl")->SetParam("fmax", 0, 100.0);
    model->GetJoint("jt_mech_vl")->SetParam("vel", 0, -1.0);

    model->GetJoint("jt_mech_hr")->SetParam("fmax", 0, 100.0);
    model->GetJoint("jt_mech_hr")->SetParam("vel", 0, -1.0);

    model->GetJoint("jt_mech_hl")->SetParam("fmax", 0, 100.0);
    model->GetJoint("jt_mech_hl")->SetParam("vel", 0, -1.0);
}

void gazebo::CTestPresets::OnUpdate()
{

}
