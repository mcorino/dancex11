/**
 * @file    rdd_handler.h
 * @author  Marijke Hengstmengel
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#ifndef DANCEX11_CONFIG_HANDLERS_RDD_HANDLER_H
#define DANCEX11_CONFIG_HANDLERS_RDD_HANDLER_H

#pragma once

#include "Basic_Deployment_Data.hpp"
#include "dancex11/deployment/deployment_deploymentplanC.h"

namespace DAnCEX11
{
  namespace Config_Handlers
  {
    Deployment::ResourceDeploymentDescription
    convert_resourcedeploymentdescription (const DAnCE::Config_Handlers::ResourceDeploymentDescription& src);
  }
}

#endif /* DANCEX11_CONFIG_HANDLERS_RDD_HANDLER_H */
