#ifndef _STEREOBM_CORRESPONDENCE_H_
#define _STEREOBM_CORRESPONDENCE_H_

#include "stereobm_image.h"

struct depth_image_t stereobm_correspondence(struct g_image_t *left_image, struct g_image_t *right_image);
int stereobm_sad_score(struct g_image_t *left_image, struct g_image_t *right_image, int x, int y, int d);

#endif
