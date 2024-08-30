/*
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 */
#include "cdp.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    // PlanSubcomponentPropertyReference

    PlanSubcomponentPropertyReference::PlanSubcomponentPropertyReference (::XMLSchema::string<char> const& propertyName__,
                                                                          ::DAnCE::Config_Handlers::InstanceDeploymentDescription const& instance__)
    : ::XSCRT::Type ()
    , propertyName_ (std::make_unique<::XMLSchema::string<char>> (propertyName__))
    , instance_ (std::make_unique<::DAnCE::Config_Handlers::InstanceDeploymentDescription> (instance__))
    {
    }

    PlanSubcomponentPropertyReference::PlanSubcomponentPropertyReference (PlanSubcomponentPropertyReference const& s) :
    ::XSCRT::Type (s)
    , propertyName_ (std::make_unique<::XMLSchema::string<char>> (*s.propertyName_))
    , instance_ (std::make_unique<::DAnCE::Config_Handlers::InstanceDeploymentDescription> (*s.instance_))
    {
    }

    PlanSubcomponentPropertyReference&
    PlanSubcomponentPropertyReference::operator= (PlanSubcomponentPropertyReference const& s)
    {
      if (std::addressof(s) != this)
      {
        propertyName (*s.propertyName_);

        instance (*s.instance_);
      }

      return *this;
    }


    // PlanSubcomponentPropertyReference
    ::XMLSchema::string<char> const& PlanSubcomponentPropertyReference::
    propertyName () const
    {
      return *propertyName_;
    }

    void PlanSubcomponentPropertyReference::
    propertyName (::XMLSchema::string<char> const& e)
    {
      *propertyName_ = e;
    }

    // PlanSubcomponentPropertyReference
    ::DAnCE::Config_Handlers::InstanceDeploymentDescription const& PlanSubcomponentPropertyReference::
    instance () const
    {
      return *instance_;
    }

    void PlanSubcomponentPropertyReference::
    instance (::DAnCE::Config_Handlers::InstanceDeploymentDescription const& e)
    {
      *instance_ = e;
    }


    // PlanPropertyMapping

    PlanPropertyMapping::PlanPropertyMapping (::XMLSchema::string<char> const& name__,
                                              ::XMLSchema::string<char> const& externalName__,
                                              delegatesTo_container_type const& delegatesTo__)
    : ::XSCRT::Type ()
    , name_ (std::make_unique<::XMLSchema::string<char>> (name__))
    , externalName_ (std::make_unique<::XMLSchema::string<char>> (externalName__))
    , delegatesTo_ (delegatesTo__)
    {
    }

    PlanPropertyMapping::PlanPropertyMapping (PlanPropertyMapping const& s) :
    ::XSCRT::Type (s)
    , name_ (std::make_unique<::XMLSchema::string<char>> (*s.name_))
    , source_ (s.source_)
    , externalName_ (std::make_unique<::XMLSchema::string<char>> (*s.externalName_))
    , delegatesTo_ (s.delegatesTo_)
    {
    }

    PlanPropertyMapping&
    PlanPropertyMapping::operator= (PlanPropertyMapping const& s)
    {
      if (std::addressof(s) != this)
      {
        name (*s.name_);

        source_ = s.source_;

        externalName (*s.externalName_);

        delegatesTo_ = s.delegatesTo_;
      }

      return *this;
    }


    // PlanPropertyMapping
    ::XMLSchema::string<char> const& PlanPropertyMapping::
    name () const
    {
      return *name_;
    }

    void PlanPropertyMapping::
    name (::XMLSchema::string<char> const& e)
    {
      *name_ = e;
    }

    // PlanPropertyMapping
    PlanPropertyMapping::source_const_iterator PlanPropertyMapping::
    begin_source () const
    {
      return source_.cbegin ();
    }

    PlanPropertyMapping::source_const_iterator PlanPropertyMapping::
    end_source () const
    {
      return source_.cend ();
    }

    size_t PlanPropertyMapping::
    count_source() const
    {
      return source_.size ();
    }

    // PlanPropertyMapping
    ::XMLSchema::string<char> const& PlanPropertyMapping::
    externalName () const
    {
      return *externalName_;
    }

    void PlanPropertyMapping::
    externalName (::XMLSchema::string<char> const& e)
    {
      *externalName_ = e;
    }

    // PlanPropertyMapping
    PlanPropertyMapping::delegatesTo_const_iterator PlanPropertyMapping::
    begin_delegatesTo () const
    {
      return delegatesTo_.cbegin ();
    }

    PlanPropertyMapping::delegatesTo_const_iterator PlanPropertyMapping::
    end_delegatesTo () const
    {
      return delegatesTo_.cend ();
    }

    size_t PlanPropertyMapping::
    count_delegatesTo() const
    {
      return delegatesTo_.size ();
    }


    // deploymentPlan

    deploymentPlan::deploymentPlan ()
    : ::XSCRT::Type ()
    {
    }

    deploymentPlan::deploymentPlan (deploymentPlan const& s) :
    ::XSCRT::Type (s)
    , label_ (s.label_ ? std::make_unique<::XMLSchema::string<char>> (*s.label_) : nullptr)
    , UUID_ (s.UUID_ ? std::make_unique<::XMLSchema::string<char>> (*s.UUID_) : nullptr)
    , realizes_ (s.realizes_ ? std::make_unique<::DAnCE::Config_Handlers::ComponentInterfaceDescription> (*s.realizes_) : nullptr)
    , implementation_ (s.implementation_)
    , instance_ (s.instance_)
    , connection_ (s.connection_)
    , externalProperty_ (s.externalProperty_)
    , dependsOn_ (s.dependsOn_)
    , artifact_ (s.artifact_)
    , infoProperty_ (s.infoProperty_)
    , localityConstraint_ (s.localityConstraint_)
    {
    }

    deploymentPlan&
    deploymentPlan::operator= (deploymentPlan const& s)
    {
      if (std::addressof(s) != this)
      {
        if (s.label_)
          label (*(s.label_));
        else
          label_.release ();

        if (s.UUID_)
          UUID (*(s.UUID_));
        else
          UUID_.release ();

        if (s.realizes_)
          realizes (*(s.realizes_));
        else
          realizes_.release ();

        implementation_ = s.implementation_;

        instance_ = s.instance_;

        connection_ = s.connection_;

        externalProperty_ = s.externalProperty_;

        dependsOn_ = s.dependsOn_;

        artifact_ = s.artifact_;

        infoProperty_ = s.infoProperty_;

        localityConstraint_ = s.localityConstraint_;
      }

      return *this;
    }


    // deploymentPlan
    bool deploymentPlan::
    label_p () const
    {
      return !!label_;
    }

    ::XMLSchema::string<char> const& deploymentPlan::
    label () const
    {
      return *label_;
    }

    void deploymentPlan::
    label (::XMLSchema::string<char> const& e)
    {
      if (label_)
      {
        *label_ = e;
      }

      else
      {
        label_ = std::make_unique<::XMLSchema::string<char>> (e);
      }
    }

    // deploymentPlan
    bool deploymentPlan::
    UUID_p () const
    {
      return !!UUID_;
    }

    ::XMLSchema::string<char> const& deploymentPlan::
    UUID () const
    {
      return *UUID_;
    }

    void deploymentPlan::
    UUID (::XMLSchema::string<char> const& e)
    {
      if (UUID_)
      {
        *UUID_ = e;
      }

      else
      {
        UUID_ = std::make_unique<::XMLSchema::string<char>> (e);
      }
    }

    // deploymentPlan
    bool deploymentPlan::
    realizes_p () const
    {
      return !!realizes_;
    }

    ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& deploymentPlan::
    realizes () const
    {
      return *realizes_;
    }

    void deploymentPlan::
    realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& e)
    {
      if (realizes_)
      {
        *realizes_ = e;
      }

      else
      {
        realizes_ = std::make_unique<::DAnCE::Config_Handlers::ComponentInterfaceDescription> (e);
      }
    }

    // deploymentPlan
    deploymentPlan::implementation_const_iterator deploymentPlan::
    begin_implementation () const
    {
      return implementation_.cbegin ();
    }

    deploymentPlan::implementation_const_iterator deploymentPlan::
    end_implementation () const
    {
      return implementation_.cend ();
    }

    size_t deploymentPlan::
    count_implementation() const
    {
      return implementation_.size ();
    }

    // deploymentPlan
    deploymentPlan::instance_const_iterator deploymentPlan::
    begin_instance () const
    {
      return instance_.cbegin ();
    }

    deploymentPlan::instance_const_iterator deploymentPlan::
    end_instance () const
    {
      return instance_.cend ();
    }

    size_t deploymentPlan::
    count_instance() const
    {
      return instance_.size ();
    }

    // deploymentPlan
    deploymentPlan::connection_const_iterator deploymentPlan::
    begin_connection () const
    {
      return connection_.cbegin ();
    }

    deploymentPlan::connection_const_iterator deploymentPlan::
    end_connection () const
    {
      return connection_.cend ();
    }

    size_t deploymentPlan::
    count_connection() const
    {
      return connection_.size ();
    }

    // deploymentPlan
    deploymentPlan::externalProperty_const_iterator deploymentPlan::
    begin_externalProperty () const
    {
      return externalProperty_.cbegin ();
    }

    deploymentPlan::externalProperty_const_iterator deploymentPlan::
    end_externalProperty () const
    {
      return externalProperty_.cend ();
    }

    size_t deploymentPlan::
    count_externalProperty() const
    {
      return externalProperty_.size ();
    }

    // deploymentPlan
    deploymentPlan::dependsOn_const_iterator deploymentPlan::
    begin_dependsOn () const
    {
      return dependsOn_.cbegin ();
    }

    deploymentPlan::dependsOn_const_iterator deploymentPlan::
    end_dependsOn () const
    {
      return dependsOn_.cend ();
    }

    size_t deploymentPlan::
    count_dependsOn() const
    {
      return dependsOn_.size ();
    }

    // deploymentPlan
    deploymentPlan::artifact_const_iterator deploymentPlan::
    begin_artifact () const
    {
      return artifact_.cbegin ();
    }

    deploymentPlan::artifact_const_iterator deploymentPlan::
    end_artifact () const
    {
      return artifact_.cend ();
    }

    size_t deploymentPlan::
    count_artifact() const
    {
      return artifact_.size ();
    }

    // deploymentPlan
    deploymentPlan::infoProperty_const_iterator deploymentPlan::
    begin_infoProperty () const
    {
      return infoProperty_.cbegin ();
    }

    deploymentPlan::infoProperty_const_iterator deploymentPlan::
    end_infoProperty () const
    {
      return infoProperty_.cend ();
    }

    size_t deploymentPlan::
    count_infoProperty() const
    {
      return infoProperty_.size ();
    }

    // deploymentPlan
    deploymentPlan::localityConstraint_const_iterator deploymentPlan::
    begin_localityConstraint () const
    {
      return localityConstraint_.cbegin ();
    }

    deploymentPlan::localityConstraint_const_iterator deploymentPlan::
    end_localityConstraint () const
    {
      return localityConstraint_.cend ();
    }

    size_t deploymentPlan::
    count_localityConstraint() const
    {
      return localityConstraint_.size ();
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    // PlanSubcomponentPropertyReference

    PlanSubcomponentPropertyReference::
    PlanSubcomponentPropertyReference (::XSCRT::XML::Element<char> const& element)
    :Base (element)
    {

      ::XSCRT::Parser<char> p (element);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element<char> e (p.next_element ());
        std::string n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "propertyName")
        {
          propertyName_ = std::make_unique<::XMLSchema::string<char>> (e);
        }

        else if (n == "instance")
        {
          instance_ = std::make_unique<::DAnCE::Config_Handlers::InstanceDeploymentDescription> (e);
        }

        else
        {
        }
      }
    }

    // PlanPropertyMapping

    PlanPropertyMapping::
    PlanPropertyMapping (::XSCRT::XML::Element<char> const& element)
    :Base (element)
    {

      ::XSCRT::Parser<char> p (element);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element<char> e (p.next_element ());
        std::string n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "name")
        {
          name_ = std::make_unique<::XMLSchema::string<char>> (e);
        }

        else if (n == "source")
        {
          ::XMLSchema::string<char> t (e);
          source_.push_back (t);
        }

        else if (n == "externalName")
        {
          externalName_ = std::make_unique<::XMLSchema::string<char>> (e);
        }

        else if (n == "delegatesTo")
        {
          ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference t (e);
          delegatesTo_.push_back (t);
        }

        else
        {
        }
      }
    }

    // deploymentPlan

    deploymentPlan::
    deploymentPlan (::XSCRT::XML::Element<char> const& element)
    :Base (element)
    {

      ::XSCRT::Parser<char> p (element);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element<char> e (p.next_element ());
        std::string n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "label")
        {
          ::XMLSchema::string<char> t (e);
          label (t);
        }

        else if (n == "UUID")
        {
          ::XMLSchema::string<char> t (e);
          UUID (t);
        }

        else if (n == "realizes")
        {
          ::DAnCE::Config_Handlers::ComponentInterfaceDescription t (e);
          realizes (t);
        }

        else if (n == "implementation")
        {
          ::DAnCE::Config_Handlers::MonolithicDeploymentDescription t (e);
          implementation_.push_back (t);
        }

        else if (n == "instance")
        {
          ::DAnCE::Config_Handlers::InstanceDeploymentDescription t (e);
          instance_.push_back (t);
        }

        else if (n == "connection")
        {
          ::DAnCE::Config_Handlers::PlanConnectionDescription t (e);
          connection_.push_back (t);
        }

        else if (n == "externalProperty")
        {
          ::DAnCE::Config_Handlers::PlanPropertyMapping t (e);
          externalProperty_.push_back (t);
        }

        else if (n == "dependsOn")
        {
          ::DAnCE::Config_Handlers::ImplementationDependency t (e);
          dependsOn_.push_back (t);
        }

        else if (n == "artifact")
        {
          ::DAnCE::Config_Handlers::ArtifactDeploymentDescription t (e);
          artifact_.push_back (t);
        }

        else if (n == "infoProperty")
        {
          ::DAnCE::Config_Handlers::Property t (e);
          infoProperty_.push_back (t);
        }

        else if (n == "localityConstraint")
        {
          ::DAnCE::Config_Handlers::PlanLocality t (e);
          localityConstraint_.push_back (t);
        }

        else
        {
        }
      }
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

