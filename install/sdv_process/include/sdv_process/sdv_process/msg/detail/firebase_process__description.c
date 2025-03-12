// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

#include "sdv_process/msg/detail/firebase_process__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sdv_process
const rosidl_type_hash_t *
sdv_process__msg__FirebaseProcess__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0x26, 0x99, 0xd4, 0x87, 0xc1, 0x73, 0x39,
      0x1b, 0x53, 0xb6, 0x74, 0x3f, 0x57, 0xa4, 0x1e,
      0x2d, 0x60, 0xcb, 0x5b, 0x2e, 0x5f, 0x73, 0x1e,
      0x70, 0xbb, 0x54, 0x75, 0xff, 0x5f, 0x1d, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sdv_process__msg__FirebaseProcess__TYPE_NAME[] = "sdv_process/msg/FirebaseProcess";

// Define type names, field names, and default values
static char sdv_process__msg__FirebaseProcess__FIELD_NAME__key[] = "key";
static char sdv_process__msg__FirebaseProcess__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field sdv_process__msg__FirebaseProcess__FIELDS[] = {
  {
    {sdv_process__msg__FirebaseProcess__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sdv_process__msg__FirebaseProcess__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sdv_process__msg__FirebaseProcess__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sdv_process__msg__FirebaseProcess__TYPE_NAME, 31, 31},
      {sdv_process__msg__FirebaseProcess__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string key\n"
  "string value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sdv_process__msg__FirebaseProcess__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sdv_process__msg__FirebaseProcess__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sdv_process__msg__FirebaseProcess__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sdv_process__msg__FirebaseProcess__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
