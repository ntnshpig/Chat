/* GIO - GLib Input, Output and Streaming Library
 *
 * Copyright (C) 2006-2007 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Alexander Larsson <alexl@redhat.com>
 */

#ifndef __G_IO_H__
#define __G_IO_H__

#define __GIO_GIO_H_INSIDE__

#include "giotypes.h"

#include "gaction.h"
#include "gactiongroup.h"
#include "gactiongroupexporter.h"
#include "gactionmap.h"
#include "gappinfo.h"
#include "gapplication.h"
#include "gapplicationcommandline.h"
#include "gasyncinitable.h"
#include "gasyncresult.h"
#include "gbufferedinputstream.h"
#include "gbufferedoutputstream.h"
#include "gbytesicon.h"
#include "gcancellable.h"
#include "gcharsetconverter.h"
#include "gcontenttype.h"
#include "gconverter.h"
#include "gconverterinputstream.h"
#include "gconverteroutputstream.h"
#include "gcredentials.h"
#include "gdatagrambased.h"
#include "gdatainputstream.h"
#include "gdataoutputstream.h"
#include "gdbusactiongroup.h"
#include "gdbusaddress.h"
#include "gdbusauthobserver.h"
#include "gdbusconnection.h"
#include "gdbuserror.h"
#include "gdbusinterface.h"
#include "gdbusinterfaceskeleton.h"
#include "gdbusintrospection.h"
#include "gdbusmenumodel.h"
#include "gdbusmessage.h"
#include "gdbusmethodinvocation.h"
#include "gdbusnameowning.h"
#include "gdbusnamewatching.h"
#include "gdbusobject.h"
#include "gdbusobjectmanager.h"
#include "gdbusobjectmanagerclient.h"
#include "gdbusobjectmanagerserver.h"
#include "gdbusobjectproxy.h"
#include "gdbusobjectskeleton.h"
#include "gdbusproxy.h"
#include "gdbusserver.h"
#include "gdbusutils.h"
#include "gdrive.h"
#include "gdtlsclientconnection.h"
#include "gdtlsconnection.h"
#include "gdtlsserverconnection.h"
#include "gemblemedicon.h"
#include "gfile.h"
#include "gfileattribute.h"
#include "gfileenumerator.h"
#include "gfileicon.h"
#include "gfileinfo.h"
#include "gfileinputstream.h"
#include "gfileiostream.h"
#include "gfilemonitor.h"
#include "gfilenamecompleter.h"
#include "gfileoutputstream.h"
#include "gfilterinputstream.h"
#include "gfilteroutputstream.h"
#include "gicon.h"
#include "ginetaddress.h"
#include "ginetaddressmask.h"
#include "ginetsocketaddress.h"
#include "ginitable.h"
#include "ginputstream.h"
#include "gioenums.h"
#include "gioenumtypes.h"
#include "gioerror.h"
#include "giomodule.h"
#include "gioscheduler.h"
#include "giostream.h"
#include "glistmodel.h"
#include "gliststore.h"
#include "gloadableicon.h"
#include "gmemoryinputstream.h"
#include "gmemorymonitor.h"
#include "gmemoryoutputstream.h"
#include "gmenu.h"
#include "gmenuexporter.h"
#include "gmenumodel.h"
#include "gmount.h"
#include "gmountoperation.h"
#include "gnativesocketaddress.h"
#include "gnativevolumemonitor.h"
#include "gnetworkaddress.h"
#include "gnetworkmonitor.h"
#include "gnetworkservice.h"
#include "gnotification.h"
#include "goutputstream.h"
#include "gpermission.h"
#include "gpollableinputstream.h"
#include "gpollableoutputstream.h"
#include "gpollableutils.h"
#include "gpropertyaction.h"
#include "gproxy.h"
#include "gproxyaddress.h"
#include "gproxyaddressenumerator.h"
#include "gproxyresolver.h"
#include "gremoteactiongroup.h"
#include "gresolver.h"
#include "gresource.h"
#include "gseekable.h"
#include "gsettings.h"
#include "gsettingsschema.h"
#include "gsimpleaction.h"
#include "gsimpleactiongroup.h"
#include "gsimpleasyncresult.h"
#include "gsimpleiostream.h"
#include "gsimplepermission.h"
#include "gsimpleproxyresolver.h"
#include "gsocket.h"
#include "gsocketaddress.h"
#include "gsocketaddressenumerator.h"
#include "gsocketclient.h"
#include "gsocketconnectable.h"
#include "gsocketconnection.h"
#include "gsocketcontrolmessage.h"
#include "gsocketlistener.h"
#include "gsocketservice.h"
#include "gsrvtarget.h"
#include "gsubprocess.h"
#include "gsubprocesslauncher.h"
#include "gtask.h"
#include "gtcpconnection.h"
#include "gtcpwrapperconnection.h"
#include "gtestdbus.h"
#include "gthemedicon.h"
#include "gthreadedsocketservice.h"
#include "gtlsbackend.h"
#include "gtlscertificate.h"
#include "gtlsclientconnection.h"
#include "gtlsconnection.h"
#include "gtlsdatabase.h"
#include "gtlsfiledatabase.h"
#include "gtlsinteraction.h"
#include "gtlspassword.h"
#include "gtlsserverconnection.h"
#include "gvfs.h"
#include "gvolume.h"
#include "gvolumemonitor.h"
#include "gzlibcompressor.h"
#include "gzlibdecompressor.h"

#include "gio-autocleanups.h"

#undef __GIO_GIO_H_INSIDE__

#endif /* __G_IO_H__ */
