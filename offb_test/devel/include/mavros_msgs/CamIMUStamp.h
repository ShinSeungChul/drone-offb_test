// Generated by gencpp from file mavros_msgs/CamIMUStamp.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_CAMIMUSTAMP_H
#define MAVROS_MSGS_MESSAGE_CAMIMUSTAMP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct CamIMUStamp_
{
  typedef CamIMUStamp_<ContainerAllocator> Type;

  CamIMUStamp_()
    : frame_stamp()
    , frame_seq_id(0)  {
    }
  CamIMUStamp_(const ContainerAllocator& _alloc)
    : frame_stamp()
    , frame_seq_id(0)  {
  (void)_alloc;
    }



   typedef ros::Time _frame_stamp_type;
  _frame_stamp_type frame_stamp;

   typedef int32_t _frame_seq_id_type;
  _frame_seq_id_type frame_seq_id;





  typedef boost::shared_ptr< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> const> ConstPtr;

}; // struct CamIMUStamp_

typedef ::mavros_msgs::CamIMUStamp_<std::allocator<void> > CamIMUStamp;

typedef boost::shared_ptr< ::mavros_msgs::CamIMUStamp > CamIMUStampPtr;
typedef boost::shared_ptr< ::mavros_msgs::CamIMUStamp const> CamIMUStampConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CamIMUStamp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/jinwoo/offboard_test/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac22af9031671dd528a56f12d0986660";
  }

  static const char* value(const ::mavros_msgs::CamIMUStamp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac22af9031671dd5ULL;
  static const uint64_t static_value2 = 0x28a56f12d0986660ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CamIMUStamp";
  }

  static const char* value(const ::mavros_msgs::CamIMUStamp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IMU-Camera synchronisation data\n\
\n\
time frame_stamp		# Timestamp when the camera was triggered\n\
int32 frame_seq_id		# Sequence number of the image frame\n\
";
  }

  static const char* value(const ::mavros_msgs::CamIMUStamp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_stamp);
      stream.next(m.frame_seq_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CamIMUStamp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CamIMUStamp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CamIMUStamp_<ContainerAllocator>& v)
  {
    s << indent << "frame_stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.frame_stamp);
    s << indent << "frame_seq_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.frame_seq_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_CAMIMUSTAMP_H
