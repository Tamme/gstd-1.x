/*
 * Gstreamer Daemon - Gst Launch under steroids
 * Copyright (C) 2015 RidgeRun Engineering <support@ridgerun.com>
 *
 * This file is part of Gstd.
 *
 * Gstd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Gstd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Gstd.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GSTD_ICREATOR_H__
#define __GSTD_ICREATOR_H__

#include <gst/gst.h>

G_BEGIN_DECLS

#define GSTD_TYPE_ICREATOR                (gstd_icreator_get_type ())
#define GSTD_ICREATOR(obj)                (G_TYPE_CHECK_INSTANCE_CAST ((obj), GSTD_TYPE_ICREATOR, GstdICreator))
#define GSTD_IS_ICREATOR(obj)             (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GSTD_TYPE_ICREATOR))
#define GSTD_ICREATOR_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), GSTD_TYPE_ICREATOR, GstdICreatorInterface))

typedef struct _GstdICreator GstdICreator;
typedef struct _GstdICreatorInterface GstdICreatorInterface;

GType gstd_icreator_get_type (void);

void gstd_icreator_create (GstdICreator *self, const gchar * name,
    const gchar * description);

G_END_DECLS

#endif // __GSTD_ICREATOR_H__
