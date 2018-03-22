#ifndef CTESTPRESETS_H
#define CTESTPRESETS_H
#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>
#include <ignition/math/Pose3.hh>
#include <iostream>

namespace gazebo
{
  class CTestPresets : public ModelPlugin
  {
    public:
      CTestPresets();

    public:
        virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf);
        void OnUpdate();

    private:
        physics::ModelPtr model;

        event::ConnectionPtr updateConnection;

        common::PID pid;
  };

  // Register this plugin with the simulator
  GZ_REGISTER_MODEL_PLUGIN(CTestPresets)
}
#endif // CTESTPRESETS_H

