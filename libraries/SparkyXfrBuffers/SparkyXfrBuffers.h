struct FROM_SPARKY_DATA_STRUCTURE{
  //put your variable definitions here for the data you want to receive
  //THIS MUST BE EXACTLY THE SAME ON THE OTHER ARDUINO
  int16_t buttonstate;
  int16_t supplyvoltagereading;
  int16_t ballready;
  int16_t packetreceivedcount;
  int16_t transmitpacketcount;
  int16_t shooterspeedecho;
  int16_t leftmotorcommand;
  int16_t rightmotorcommand;
  int16_t spare1;
  int16_t spare2;
};

struct TO_SPARKY_DATA_STRUCTURE{
  //put your variable definitions here for the data you want to receive
  //THIS MUST BE EXACTLY THE SAME ON THE OTHER ARDUINO
  int16_t stickLx;
  int16_t stickLy;
  int16_t stickLbutton;
  int16_t stickRx;
  int16_t stickRy;
  int16_t stickRbutton;
  int16_t shooterspeed;
  int16_t intake;
  int16_t shoot;
  int16_t drivemode;
  int16_t enabled;
  int16_t counter;
  int16_t spare1;
  int16_t spare2;
};

