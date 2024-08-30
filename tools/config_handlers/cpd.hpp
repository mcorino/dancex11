/*
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 */
#ifndef CPD_HPP
#define CPD_HPP

#include "xsc_xml_handlers_export.h"
// Forward declarations.
namespace DAnCE
{
  namespace Config_Handlers
  {
    class PackagedComponentImplementation;
    class ComponentPackageDescription;
    class ConnectorPackageDescription;
  }
}

#include <memory>
#include <string>
#include <vector>
#include "ace/XML_Utils/XMLSchema/Types.hpp"
#include "ace/XML_Utils/XMLSchema/id_map.hpp"
#include "tao/x11/base/stddef.h"
#include "cid.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    class XSC_XML_Handlers_Export PackagedComponentImplementation : public ::XSCRT::Type
    {
      using Base = ::XSCRT::Type;

      // name
      public:
      ::XMLSchema::string<char> const& name () const;
      void name (::XMLSchema::string<char> const& );

      protected:
      using name_unique_ptr_type = std::unique_ptr<::XMLSchema::string<char>>;
      name_unique_ptr_type name_;

      // referencedImplementation
      public:
      ::DAnCE::Config_Handlers::ComponentImplementationDescription const& referencedImplementation () const;
      void referencedImplementation (::DAnCE::Config_Handlers::ComponentImplementationDescription const& );

      protected:
      using referencedImplementation_unique_ptr_type = std::unique_ptr<::DAnCE::Config_Handlers::ComponentImplementationDescription>;
      referencedImplementation_unique_ptr_type referencedImplementation_;

      public:
      PackagedComponentImplementation (::XMLSchema::string<char> const& name__,
                                       ::DAnCE::Config_Handlers::ComponentImplementationDescription const& referencedImplementation__);

      explicit PackagedComponentImplementation (::XSCRT::XML::Element<char> const&);
      PackagedComponentImplementation (PackagedComponentImplementation const& s);
      PackagedComponentImplementation& operator= (PackagedComponentImplementation const& s);

      PackagedComponentImplementation (PackagedComponentImplementation&&) = default;
      PackagedComponentImplementation& operator= (PackagedComponentImplementation&&) = default;
    };


    class XSC_XML_Handlers_Export ComponentPackageDescription : public ::XSCRT::Type
    {
      using Base = ::XSCRT::Type;

      // label
      public:
      bool label_p () const;
      ::XMLSchema::string<char> const& label () const;
      void label (::XMLSchema::string<char> const& );

      protected:
      using label_unique_ptr_type = std::unique_ptr<::XMLSchema::string<char>>;
      label_unique_ptr_type label_;

      // UUID
      public:
      bool UUID_p () const;
      ::XMLSchema::string<char> const& UUID () const;
      void UUID (::XMLSchema::string<char> const& );

      protected:
      using UUID_unique_ptr_type = std::unique_ptr<::XMLSchema::string<char>>;
      UUID_unique_ptr_type UUID_;

      // realizes
      public:
      bool realizes_p () const;
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& realizes () const;
      void realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      using realizes_unique_ptr_type = std::unique_ptr<::DAnCE::Config_Handlers::ComponentInterfaceDescription>;
      realizes_unique_ptr_type realizes_;

      // configProperty
      public:
      using configProperty_container_type = std::vector< ::DAnCE::Config_Handlers::Property>;
      using configProperty_const_iterator = configProperty_container_type::const_iterator;
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      size_t count_configProperty () const;

      protected:
      configProperty_container_type configProperty_;

      // implementation
      public:
      using implementation_container_type = std::vector< ::DAnCE::Config_Handlers::PackagedComponentImplementation>;
      using implementation_const_iterator = implementation_container_type::const_iterator;
      implementation_const_iterator begin_implementation () const;
      implementation_const_iterator end_implementation () const;
      size_t count_implementation () const;

      protected:
      implementation_container_type implementation_;

      // infoProperty
      public:
      using infoProperty_container_type = std::vector< ::DAnCE::Config_Handlers::Property>;
      using infoProperty_const_iterator = infoProperty_container_type::const_iterator;
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      size_t count_infoProperty () const;

      protected:
      infoProperty_container_type infoProperty_;

      // href
      public:
      bool href_p () const;
      ::XMLSchema::string<char> const& href () const;
      ::XMLSchema::string<char>& href ();
      void href (::XMLSchema::string<char> const& );

      protected:
      using href_unique_ptr_type = std::unique_ptr<::XMLSchema::string<char>>;
      href_unique_ptr_type href_;

      public:
      ComponentPackageDescription ();

      explicit ComponentPackageDescription (::XSCRT::XML::Element<char> const&);
      ComponentPackageDescription (ComponentPackageDescription const& s);
      ComponentPackageDescription& operator= (ComponentPackageDescription const& s);

      ComponentPackageDescription (ComponentPackageDescription&&) = default;
      ComponentPackageDescription& operator= (ComponentPackageDescription&&) = default;
    };


    class XSC_XML_Handlers_Export ConnectorPackageDescription : public ::XSCRT::Type
    {
      using Base = ::XSCRT::Type;

      // label
      public:
      bool label_p () const;
      ::XMLSchema::string<char> const& label () const;
      void label (::XMLSchema::string<char> const& );

      protected:
      using label_unique_ptr_type = std::unique_ptr<::XMLSchema::string<char>>;
      label_unique_ptr_type label_;

      // UUID
      public:
      bool UUID_p () const;
      ::XMLSchema::string<char> const& UUID () const;
      void UUID (::XMLSchema::string<char> const& );

      protected:
      using UUID_unique_ptr_type = std::unique_ptr<::XMLSchema::string<char>>;
      UUID_unique_ptr_type UUID_;

      // realizes
      public:
      bool realizes_p () const;
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& realizes () const;
      void realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      using realizes_unique_ptr_type = std::unique_ptr<::DAnCE::Config_Handlers::ComponentInterfaceDescription>;
      realizes_unique_ptr_type realizes_;

      // configProperty
      public:
      using configProperty_container_type = std::vector< ::DAnCE::Config_Handlers::Property>;
      using configProperty_const_iterator = configProperty_container_type::const_iterator;
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      size_t count_configProperty () const;

      protected:
      configProperty_container_type configProperty_;

      // implementation
      public:
      using implementation_container_type = std::vector< ::DAnCE::Config_Handlers::ConnectorImplementationDescription>;
      using implementation_const_iterator = implementation_container_type::const_iterator;
      implementation_const_iterator begin_implementation () const;
      implementation_const_iterator end_implementation () const;
      size_t count_implementation () const;

      protected:
      implementation_container_type implementation_;

      // infoProperty
      public:
      using infoProperty_container_type = std::vector< ::DAnCE::Config_Handlers::Property>;
      using infoProperty_const_iterator = infoProperty_container_type::const_iterator;
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      size_t count_infoProperty () const;

      protected:
      infoProperty_container_type infoProperty_;

      // href
      public:
      bool href_p () const;
      ::XMLSchema::string<char> const& href () const;
      ::XMLSchema::string<char>& href ();
      void href (::XMLSchema::string<char> const& );

      protected:
      using href_unique_ptr_type = std::unique_ptr<::XMLSchema::string<char>>;
      href_unique_ptr_type href_;

      public:
      ConnectorPackageDescription ();

      explicit ConnectorPackageDescription (::XSCRT::XML::Element<char> const&);
      ConnectorPackageDescription (ConnectorPackageDescription const& s);
      ConnectorPackageDescription& operator= (ConnectorPackageDescription const& s);

      ConnectorPackageDescription (ConnectorPackageDescription&&) = default;
      ConnectorPackageDescription& operator= (ConnectorPackageDescription&&) = default;
    };
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

#endif // CPD_HPP
