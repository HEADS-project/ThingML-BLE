/*****************************************************************************
 * Headers for type : NeoPixelNotifierTest
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixelNotifierTest_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_neopixels;
// Variables for the current instance state
int NeoPixelNotifierTest_Test_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void NeoPixelNotifierTest_Test_OnEntry(int state, struct NeoPixelNotifierTest_Instance *_instance);
void NeoPixelNotifierTest_handle_clock_timer_timeout(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id);
// Declaration of callbacks for incoming messages:
void register_NeoPixelNotifierTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint32_t));
void register_external_NeoPixelNotifierTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint32_t));
void register_NeoPixelNotifierTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t));
void register_external_NeoPixelNotifierTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t));
void register_NeoPixelNotifierTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_NeoPixelNotifierTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_NeoPixelNotifierTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_NeoPixelNotifierTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_NeoPixelNotifierTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_external_NeoPixelNotifierTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_NeoPixelNotifierTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_external_NeoPixelNotifierTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_NeoPixelNotifierTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, int8_t));
void register_external_NeoPixelNotifierTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, int8_t));
void register_NeoPixelNotifierTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_external_NeoPixelNotifierTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_NeoPixelNotifierTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_external_NeoPixelNotifierTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_NeoPixelNotifierTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_external_NeoPixelNotifierTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_NeoPixelNotifierTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));
void register_external_NeoPixelNotifierTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *));

// Definition of the states:
#define NEOPIXELNOTIFIERTEST_TEST_STATE 0
#define NEOPIXELNOTIFIERTEST_TEST_TEST_STATE 1
#define NEOPIXELNOTIFIERTEST_TEST_GREEN_STATE 2
#define NEOPIXELNOTIFIERTEST_TEST_OFF_STATE 3
#define NEOPIXELNOTIFIERTEST_TEST_BREATH_STATE 4
#define NEOPIXELNOTIFIERTEST_TEST_PULSE_STATE 5
#define NEOPIXELNOTIFIERTEST_TEST_PUMP_STATE 6
#define NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE 7
#define NEOPIXELNOTIFIERTEST_TEST_BLINK_STATE 8
#define NEOPIXELNOTIFIERTEST_TEST_GWOK_STATE 9
#define NEOPIXELNOTIFIERTEST_TEST_TELLUERR_STATE 10


/*****************************************************************************
 * Headers for type : NeoPixelNotifier
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixelNotifier_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
uint16_t id_clock;
// Variables for the current instance state
int NeoPixelNotifier_NeoPixelStateChart_State;
// Variables for the properties of the instance
uint8_t NeoPixelNotifier_NeoPixelStateChart_color_g_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_breath_speed_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var;
uint8_t NeoPixelNotifier_neopixel_ring_last_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var;
uint8_t NeoPixelNotifier_neopixel_logo_first_var;
int8_t NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var;
uint8_t NeoPixelNotifier_ring_brightness_divider_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_PULSE_maxcount_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_color_b_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_color_r_var;
uint8_t NeoPixelNotifier_neopixel_total_count_var;
uint8_t NeoPixelNotifier_neopixel_pin_var;
uint8_t NeoPixelNotifier_neopixel_logo_last_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var;
int16_t NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKALL_maxcount_var;
uint8_t NeoPixelNotifier_neopixel_ring_first_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_l_color_g_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_maxcount_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_l_color_r_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_l_color_b_var;
uint8_t NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var;

};
// Declaration of prototypes outgoing messages:
void NeoPixelNotifier_NeoPixelStateChart_OnEntry(int state, struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_breath(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_setRingColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifier_handle_ctrl_solid(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_blink_logo(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_setLogoColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifier_handle_ctrl_off(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_setColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifier_handle_ctrl_pulse(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_blink(struct NeoPixelNotifier_Instance *_instance);
void NeoPixelNotifier_handle_ctrl_rotate(struct NeoPixelNotifier_Instance *_instance, int8_t speed);
void NeoPixelNotifier_handle_clock_fps_clock(struct NeoPixelNotifier_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE 0
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE 1
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE 2
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE 3
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE 4
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE 5
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE 6
#define NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE 7


//timer2

/* Adds and instance to the runtime and returns its id */
uint16_t add_instance(void * instance_struct);
/* Returns the instance with id */
void * instance_by_id(uint16_t id);

/* Returns the number of byte currently in the fifo */
int fifo_byte_length();
/* Returns the number of bytes currently available in the fifo */
int fifo_byte_available();
/* Returns true if the fifo is empty */
int fifo_empty();
/* Return true if the fifo is full */
int fifo_full();
/* Enqueue 1 byte in the fifo if there is space
   returns 1 for sucess and 0 if the fifo was full */
int fifo_enqueue(byte b);
/* Enqueue 1 byte in the fifo without checking for available space
   The caller should have checked that there is enough space */
int _fifo_enqueue(byte b);
/* Dequeue 1 byte in the fifo.
   The caller should check that the fifo is not empty */
byte fifo_dequeue();

#define MAX_INSTANCES 6
#define FIFO_SIZE 256

/*********************************
 * Instance IDs and lookup
 *********************************/

void * instances[MAX_INSTANCES];
uint16_t instances_count = 0;

void * instance_by_id(uint16_t id) {
  return instances[id];
}

uint16_t add_instance(void * instance_struct) {
  instances[instances_count] = instance_struct;
  return instances_count++;
}

/******************************************
 * Simple byte FIFO implementation
 ******************************************/

byte fifo[FIFO_SIZE];
int fifo_head = 0;
int fifo_tail = 0;

// Returns the number of byte currently in the fifo
int fifo_byte_length() {
  if (fifo_tail >= fifo_head)
    return fifo_tail - fifo_head;
  return fifo_tail + FIFO_SIZE - fifo_head;
}

// Returns the number of bytes currently available in the fifo
int fifo_byte_available() {
  return FIFO_SIZE - 1 - fifo_byte_length();
}

// Returns true if the fifo is empty
int fifo_empty() {
  return fifo_head == fifo_tail;
}

// Return true if the fifo is full
int fifo_full() {
  return fifo_head == ((fifo_tail + 1) % FIFO_SIZE);
}

// Enqueue 1 byte in the fifo if there is space
// returns 1 for sucess and 0 if the fifo was full
int fifo_enqueue(byte b) {
  int new_tail = (fifo_tail + 1) % FIFO_SIZE;
  if (new_tail == fifo_head) return 0; // the fifo is full
  fifo[fifo_tail] = b;
  fifo_tail = new_tail;
  return 1;
}

// Enqueue 1 byte in the fifo without checking for available space
// The caller should have checked that there is enough space
int _fifo_enqueue(byte b) {
  fifo[fifo_tail] = b;
  fifo_tail = (fifo_tail + 1) % FIFO_SIZE;
  return 0; // Dummy added by steffend
}

// Dequeue 1 byte in the fifo.
// The caller should check that the fifo is not empty
byte fifo_dequeue() {
  if (!fifo_empty()) {
    byte result = fifo[fifo_head];
    fifo_head = (fifo_head + 1) % FIFO_SIZE;
    return result;
  }
  return 0;
}

#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;

uint8_t timer2_tic_flags = 0;

void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id);

uint8_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if((timer2_interrupt_counter % 33) == 0) {
timer2_tic_flags |= 0b00000001;
}
if(timer2_interrupt_counter >= 33) {
timer2_interrupt_counter = 0;
}
}



struct timer2_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
} timer2_instance;

void timer2_setup() {
	// Run timer2 interrupt up counting at 250kHz 
		 TCCR2A = 0;
		 TCCR2B = 1<<CS22 | 0<<CS21 | 0<<CS20;
		
		 //Timer2 Overflow Interrupt Enable
		 TIMSK2 |= 1<<TOIE2;


	timer2_prev_1sec = millis() + 1000;
}

void timer2_set_listener_id(uint16_t id) {
	timer2_instance.listener_id = id;
}

void timer2_timer_start(uint8_t id, uint32_t ms) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = ms + millis();
}
}

void timer2_timer_cancel(uint8_t id) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = 0;
}
}

void timer2_timeout(uint8_t id) {
uint8_t enqueue_buf[3];
enqueue_buf[0] = (1 >> 8) & 0xFF;
enqueue_buf[1] = 1 & 0xFF;
enqueue_buf[2] = id;
externalMessageEnqueue(enqueue_buf, 3, timer2_instance.listener_id);
}

void timer2_33ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (2 >> 8) & 0xFF;
enqueue_buf[1] = 2 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}





void timer2_read() {
    uint32_t tms = millis();
    uint8_t t;
for(t = 0; t < 4; t++) {
if((timer2_timer[t] > 0) && (timer2_timer[t] < tms)) {
timer2_timer[t] = 0;
timer2_timeout(t);
}
}

    if (timer2_prev_1sec < tms) {
        timer2_prev_1sec += 1000;
    }
    if((timer2_tic_flags & 0b00000001) >> 0) {
timer2_33ms_tic();
timer2_tic_flags &= 0b11111110;
}

}
// Forwarding of messages timer2::NeoPixelNotifierTest::clock::timer_start
void forward_timer2_NeoPixelNotifierTest_send_clock_timer_start(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::NeoPixelNotifierTest::clock::timer_cancel
void forward_timer2_NeoPixelNotifierTest_send_clock_timer_cancel(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

/*****************************************************************************
 * Implementation for type : NeoPixelNotifierTest
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixelNotifierTest_Test_OnExit(int state, struct NeoPixelNotifierTest_Instance *_instance);
//Prototypes: Message Sending
void NeoPixelNotifierTest_send_clock_timer_start(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id, uint32_t time);
void NeoPixelNotifierTest_send_clock_timer_cancel(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id);
void NeoPixelNotifierTest_send_neopixels_setColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierTest_send_neopixels_setLogoColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierTest_send_neopixels_setRingColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierTest_send_neopixels_off(struct NeoPixelNotifierTest_Instance *_instance);
void NeoPixelNotifierTest_send_neopixels_pulse(struct NeoPixelNotifierTest_Instance *_instance);
void NeoPixelNotifierTest_send_neopixels_rotate(struct NeoPixelNotifierTest_Instance *_instance, int8_t speed);
void NeoPixelNotifierTest_send_neopixels_breath(struct NeoPixelNotifierTest_Instance *_instance);
void NeoPixelNotifierTest_send_neopixels_solid(struct NeoPixelNotifierTest_Instance *_instance);
void NeoPixelNotifierTest_send_neopixels_blink(struct NeoPixelNotifierTest_Instance *_instance);
void NeoPixelNotifierTest_send_neopixels_blink_logo(struct NeoPixelNotifierTest_Instance *_instance);
//Prototypes: Function
void f_NeoPixelNotifierTest_neo_standby(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_requested(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_measuring1(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_measuring2(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_bluetooth(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_gateway_ack(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_gateway_error(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_tellucloud_ack(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_tellucloud_error(struct NeoPixelNotifierTest_Instance *_instance);
void f_NeoPixelNotifierTest_neo_solid(struct NeoPixelNotifierTest_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
// Declaration of functions:
// Definition of function neo_standby
void f_NeoPixelNotifierTest_neo_standby(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setColor(_instance, 0, 50, 255);
NeoPixelNotifierTest_send_neopixels_breath(_instance);
}
// Definition of function neo_requested
void f_NeoPixelNotifierTest_neo_requested(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setColor(_instance, 0, 255, 96);
NeoPixelNotifierTest_send_neopixels_pulse(_instance);
}
// Definition of function neo_measuring1
void f_NeoPixelNotifierTest_neo_measuring1(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setColor(_instance, 255, 32, 0);
NeoPixelNotifierTest_send_neopixels_rotate(_instance, 12);
}
// Definition of function neo_measuring2
void f_NeoPixelNotifierTest_neo_measuring2(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setColor(_instance, 160, 140, 0);
NeoPixelNotifierTest_send_neopixels_rotate(_instance,  -2);
}
// Definition of function neo_bluetooth
void f_NeoPixelNotifierTest_neo_bluetooth(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setColor(_instance, 0, 40, 255);
NeoPixelNotifierTest_send_neopixels_blink(_instance);
}
// Definition of function neo_gateway_ack
void f_NeoPixelNotifierTest_neo_gateway_ack(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setRingColor(_instance, 0, 255, 40);
NeoPixelNotifierTest_send_neopixels_blink_logo(_instance);
}
// Definition of function neo_gateway_error
void f_NeoPixelNotifierTest_neo_gateway_error(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setColor(_instance, 255, 40, 0);
NeoPixelNotifierTest_send_neopixels_solid(_instance);
}
// Definition of function neo_tellucloud_ack
void f_NeoPixelNotifierTest_neo_tellucloud_ack(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setLogoColor(_instance, 0, 255, 40);
NeoPixelNotifierTest_send_neopixels_solid(_instance);
}
// Definition of function neo_tellucloud_error
void f_NeoPixelNotifierTest_neo_tellucloud_error(struct NeoPixelNotifierTest_Instance *_instance) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setLogoColor(_instance, 255, 40, 0);
NeoPixelNotifierTest_send_neopixels_solid(_instance);
}
// Definition of function neo_solid
void f_NeoPixelNotifierTest_neo_solid(struct NeoPixelNotifierTest_Instance *_instance, uint8_t r, uint8_t g, uint8_t b) {
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_neopixels_setColor(_instance, r, g, b);
NeoPixelNotifierTest_send_neopixels_solid(_instance);
}

// Sessions functionss:


// On Entry Actions:
void NeoPixelNotifierTest_Test_OnEntry(int state, struct NeoPixelNotifierTest_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIERTEST_TEST_STATE:{
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE;
NeoPixelNotifierTest_Test_OnEntry(_instance->NeoPixelNotifierTest_Test_State, _instance);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_TEST_STATE:{
f_NeoPixelNotifierTest_neo_bluetooth(_instance);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_GREEN_STATE:{
f_NeoPixelNotifierTest_neo_solid(_instance, 0, 255, 32);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 1000);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_OFF_STATE:{
NeoPixelNotifierTest_send_neopixels_off(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 500);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_BREATH_STATE:{
f_NeoPixelNotifierTest_neo_standby(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 5000);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_PULSE_STATE:{
f_NeoPixelNotifierTest_neo_requested(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 5000);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_PUMP_STATE:{
f_NeoPixelNotifierTest_neo_measuring1(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE:{
f_NeoPixelNotifierTest_neo_measuring2(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_BLINK_STATE:{
f_NeoPixelNotifierTest_neo_bluetooth(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 3000);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_GWOK_STATE:{
f_NeoPixelNotifierTest_neo_gateway_ack(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
case NEOPIXELNOTIFIERTEST_TEST_TELLUERR_STATE:{
f_NeoPixelNotifierTest_neo_tellucloud_error(_instance);
NeoPixelNotifierTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixelNotifierTest_Test_OnExit(int state, struct NeoPixelNotifierTest_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIERTEST_TEST_STATE:{
NeoPixelNotifierTest_Test_OnExit(_instance->NeoPixelNotifierTest_Test_State, _instance);
break;}
case NEOPIXELNOTIFIERTEST_TEST_TEST_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_GREEN_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_OFF_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_BREATH_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_PULSE_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_PUMP_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_BLINK_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_GWOK_STATE:{
break;}
case NEOPIXELNOTIFIERTEST_TEST_TELLUERR_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixelNotifierTest_handle_clock_timer_timeout(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region Test
uint8_t NeoPixelNotifierTest_Test_State_event_consumed = 0;
if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_GREEN_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_GREEN_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_OFF_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_OFF_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_OFF_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_OFF_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_BREATH_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_BREATH_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_BREATH_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_BREATH_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_PULSE_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_PULSE_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_PULSE_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_PULSE_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_PUMP_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_PUMP_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_PUMP_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_PUMP_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_BLINK_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_BLINK_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_BLINK_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_BLINK_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_GWOK_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_GWOK_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_GWOK_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_GWOK_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_TELLUERR_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_TELLUERR_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierTest_Test_State == NEOPIXELNOTIFIERTEST_TEST_TELLUERR_STATE) {
if (NeoPixelNotifierTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierTest_Test_OnExit(NEOPIXELNOTIFIERTEST_TEST_TELLUERR_STATE, _instance);
_instance->NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_GREEN_STATE;
NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_GREEN_STATE, _instance);
NeoPixelNotifierTest_Test_State_event_consumed = 1;
}
}
//End Region Test
//End dsregion Test
//Session list: 
}

// Observers for outgoing messages:
void (*external_NeoPixelNotifierTest_send_clock_timer_start_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint32_t)= 0x0;
void (*NeoPixelNotifierTest_send_clock_timer_start_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_NeoPixelNotifierTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint32_t)){
external_NeoPixelNotifierTest_send_clock_timer_start_listener = _listener;
}
void register_NeoPixelNotifierTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint32_t)){
NeoPixelNotifierTest_send_clock_timer_start_listener = _listener;
}
void NeoPixelNotifierTest_send_clock_timer_start(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id, uint32_t time){
if (NeoPixelNotifierTest_send_clock_timer_start_listener != 0x0) NeoPixelNotifierTest_send_clock_timer_start_listener(_instance, id, time);
if (external_NeoPixelNotifierTest_send_clock_timer_start_listener != 0x0) external_NeoPixelNotifierTest_send_clock_timer_start_listener(_instance, id, time);
;
}
void (*external_NeoPixelNotifierTest_send_clock_timer_cancel_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t)= 0x0;
void (*NeoPixelNotifierTest_send_clock_timer_cancel_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t)= 0x0;
void register_external_NeoPixelNotifierTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t)){
external_NeoPixelNotifierTest_send_clock_timer_cancel_listener = _listener;
}
void register_NeoPixelNotifierTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t)){
NeoPixelNotifierTest_send_clock_timer_cancel_listener = _listener;
}
void NeoPixelNotifierTest_send_clock_timer_cancel(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id){
if (NeoPixelNotifierTest_send_clock_timer_cancel_listener != 0x0) NeoPixelNotifierTest_send_clock_timer_cancel_listener(_instance, id);
if (external_NeoPixelNotifierTest_send_clock_timer_cancel_listener != 0x0) external_NeoPixelNotifierTest_send_clock_timer_cancel_listener(_instance, id);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_setColor_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_setColor_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)){
external_NeoPixelNotifierTest_send_neopixels_setColor_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)){
NeoPixelNotifierTest_send_neopixels_setColor_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_setColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (NeoPixelNotifierTest_send_neopixels_setColor_listener != 0x0) NeoPixelNotifierTest_send_neopixels_setColor_listener(_instance, red, green, blue);
if (external_NeoPixelNotifierTest_send_neopixels_setColor_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_setColor_listener(_instance, red, green, blue);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_setLogoColor_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)){
external_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)){
NeoPixelNotifierTest_send_neopixels_setLogoColor_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_setLogoColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (NeoPixelNotifierTest_send_neopixels_setLogoColor_listener != 0x0) NeoPixelNotifierTest_send_neopixels_setLogoColor_listener(_instance, red, green, blue);
if (external_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener(_instance, red, green, blue);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_setRingColor_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_setRingColor_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)){
external_NeoPixelNotifierTest_send_neopixels_setRingColor_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, uint8_t, uint8_t, uint8_t)){
NeoPixelNotifierTest_send_neopixels_setRingColor_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_setRingColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (NeoPixelNotifierTest_send_neopixels_setRingColor_listener != 0x0) NeoPixelNotifierTest_send_neopixels_setRingColor_listener(_instance, red, green, blue);
if (external_NeoPixelNotifierTest_send_neopixels_setRingColor_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_setRingColor_listener(_instance, red, green, blue);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_off_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_off_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
external_NeoPixelNotifierTest_send_neopixels_off_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
NeoPixelNotifierTest_send_neopixels_off_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_off(struct NeoPixelNotifierTest_Instance *_instance){
if (NeoPixelNotifierTest_send_neopixels_off_listener != 0x0) NeoPixelNotifierTest_send_neopixels_off_listener(_instance);
if (external_NeoPixelNotifierTest_send_neopixels_off_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_off_listener(_instance);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_pulse_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_pulse_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
external_NeoPixelNotifierTest_send_neopixels_pulse_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
NeoPixelNotifierTest_send_neopixels_pulse_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_pulse(struct NeoPixelNotifierTest_Instance *_instance){
if (NeoPixelNotifierTest_send_neopixels_pulse_listener != 0x0) NeoPixelNotifierTest_send_neopixels_pulse_listener(_instance);
if (external_NeoPixelNotifierTest_send_neopixels_pulse_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_pulse_listener(_instance);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_rotate_listener)(struct NeoPixelNotifierTest_Instance *, int8_t)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_rotate_listener)(struct NeoPixelNotifierTest_Instance *, int8_t)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, int8_t)){
external_NeoPixelNotifierTest_send_neopixels_rotate_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *, int8_t)){
NeoPixelNotifierTest_send_neopixels_rotate_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_rotate(struct NeoPixelNotifierTest_Instance *_instance, int8_t speed){
if (NeoPixelNotifierTest_send_neopixels_rotate_listener != 0x0) NeoPixelNotifierTest_send_neopixels_rotate_listener(_instance, speed);
if (external_NeoPixelNotifierTest_send_neopixels_rotate_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_rotate_listener(_instance, speed);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_breath_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_breath_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
external_NeoPixelNotifierTest_send_neopixels_breath_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
NeoPixelNotifierTest_send_neopixels_breath_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_breath(struct NeoPixelNotifierTest_Instance *_instance){
if (NeoPixelNotifierTest_send_neopixels_breath_listener != 0x0) NeoPixelNotifierTest_send_neopixels_breath_listener(_instance);
if (external_NeoPixelNotifierTest_send_neopixels_breath_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_breath_listener(_instance);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_solid_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_solid_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
external_NeoPixelNotifierTest_send_neopixels_solid_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
NeoPixelNotifierTest_send_neopixels_solid_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_solid(struct NeoPixelNotifierTest_Instance *_instance){
if (NeoPixelNotifierTest_send_neopixels_solid_listener != 0x0) NeoPixelNotifierTest_send_neopixels_solid_listener(_instance);
if (external_NeoPixelNotifierTest_send_neopixels_solid_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_solid_listener(_instance);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_blink_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_blink_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
external_NeoPixelNotifierTest_send_neopixels_blink_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
NeoPixelNotifierTest_send_neopixels_blink_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_blink(struct NeoPixelNotifierTest_Instance *_instance){
if (NeoPixelNotifierTest_send_neopixels_blink_listener != 0x0) NeoPixelNotifierTest_send_neopixels_blink_listener(_instance);
if (external_NeoPixelNotifierTest_send_neopixels_blink_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_blink_listener(_instance);
;
}
void (*external_NeoPixelNotifierTest_send_neopixels_blink_logo_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void (*NeoPixelNotifierTest_send_neopixels_blink_logo_listener)(struct NeoPixelNotifierTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
external_NeoPixelNotifierTest_send_neopixels_blink_logo_listener = _listener;
}
void register_NeoPixelNotifierTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierTest_Instance *)){
NeoPixelNotifierTest_send_neopixels_blink_logo_listener = _listener;
}
void NeoPixelNotifierTest_send_neopixels_blink_logo(struct NeoPixelNotifierTest_Instance *_instance){
if (NeoPixelNotifierTest_send_neopixels_blink_logo_listener != 0x0) NeoPixelNotifierTest_send_neopixels_blink_logo_listener(_instance);
if (external_NeoPixelNotifierTest_send_neopixels_blink_logo_listener != 0x0) external_NeoPixelNotifierTest_send_neopixels_blink_logo_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : NeoPixelNotifier
 *****************************************************************************/


// BEGIN: Code from the c_global annotation NeoPixelNotifier

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip;

#define BREATH_LEN 36
uint8_t breath[] = {0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};

#define PULSE_LEN 37
uint8_t pulse[] =  {32, 40, 50, 55, 50, 32, 32, 32, 20, 10, 20, 40, 80, 160, 230, 255, 230, 160, 80, 40, 20, 10, 5, 2, 0, 6, 16, 30, 32, 32, 40, 48, 55, 60, 50, 36, 32};

#define BLINK_LEN 11
uint8_t blink[] =  {0, 6, 24, 52, 88, 127, 166, 202, 230, 248, 255};

#define ROTATE_LEN 10
uint8_t rotatep[] =  {0, 0, 255, 0, 0, 0, 0, 255, 0, 0};

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

// END: Code from the c_global annotation NeoPixelNotifier

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixelNotifier_NeoPixelStateChart_OnExit(int state, struct NeoPixelNotifier_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_NeoPixelNotifier_setPixelColor(struct NeoPixelNotifier_Instance *_instance, uint8_t pixel, uint32_t color);
uint32_t f_NeoPixelNotifier_getColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void f_NeoPixelNotifier_updateNeopixels(struct NeoPixelNotifier_Instance *_instance);
uint8_t f_NeoPixelNotifier_breath_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time, uint8_t max);
uint8_t f_NeoPixelNotifier_rotate_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t angle, uint8_t max);
uint8_t f_NeoPixelNotifier_pulse_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time);
uint8_t f_NeoPixelNotifier_blink_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time);
void f_NeoPixelNotifier_initializeNeopixels(struct NeoPixelNotifier_Instance *_instance);
// Declaration of functions:
// Definition of function setPixelColor
void f_NeoPixelNotifier_setPixelColor(struct NeoPixelNotifier_Instance *_instance, uint8_t pixel, uint32_t color) {
strip.setPixelColor(pixel, color);
}
// Definition of function getColor
uint32_t f_NeoPixelNotifier_getColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
return strip.Color(red, green, blue);
}
// Definition of function updateNeopixels
void f_NeoPixelNotifier_updateNeopixels(struct NeoPixelNotifier_Instance *_instance) {
strip.show();
}
// Definition of function breath_brightness
uint8_t f_NeoPixelNotifier_breath_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time, uint8_t max) {
if(time > max / 2) {
return f_NeoPixelNotifier_breath_brightness(_instance, max - time, max);

}
if(time == max / 2) {
return breath[BREATH_LEN-1];

}
;uint16_t index = (time * BREATH_LEN) / (max / 2);
;uint16_t prev = (index * (max / 2)) / BREATH_LEN;
;uint16_t next = ((index + 1) * (max / 2)) / BREATH_LEN;
;uint16_t nextv;
if(index < BREATH_LEN - 1) {
nextv = breath[index + 1];

} else {
nextv = breath[index];

}
return ((next - time) * breath[index] + (time - prev) * nextv) / (next - prev);
}
// Definition of function rotate_brightness
uint8_t f_NeoPixelNotifier_rotate_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t angle, uint8_t max) {
;uint16_t index = (angle * ROTATE_LEN) / max;
;uint16_t prev = (index * max) / ROTATE_LEN;
;uint16_t next = ((index + 1) * max) / ROTATE_LEN;
;uint8_t nextv;
if(index < ROTATE_LEN - 1) {
nextv = rotatep[index + 1];

} else {
nextv = rotatep[0];

}
return ((next - angle) * rotatep[index] + (angle - prev) * nextv) / (next - prev);
}
// Definition of function pulse_brightness
uint8_t f_NeoPixelNotifier_pulse_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time) {
if(time < PULSE_LEN) {
return pulse[time];

} else {
return pulse[0];

}
}
// Definition of function blink_brightness
uint8_t f_NeoPixelNotifier_blink_brightness(struct NeoPixelNotifier_Instance *_instance, uint8_t time) {
if(time < BLINK_LEN) {
return blink[time];

} else {
if(time < BLINK_LEN*2) {
return blink[BLINK_LEN*2-time-1];

} else {
return blink[0];

}

}
}
// Definition of function initializeNeopixels
void f_NeoPixelNotifier_initializeNeopixels(struct NeoPixelNotifier_Instance *_instance) {
strip = Adafruit_NeoPixel(_instance->NeoPixelNotifier_neopixel_total_count_var, _instance->NeoPixelNotifier_neopixel_pin_var, NEO_GRBW + NEO_KHZ800);
		 strip.begin();
		 strip.setBrightness(255);
		 strip.show();
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, 0, 50, 255);
f_NeoPixelNotifier_setPixelColor(_instance, _instance->NeoPixelNotifier_neopixel_total_count_var, color);
f_NeoPixelNotifier_updateNeopixels(_instance);
}

// Sessions functionss:


// On Entry Actions:
void NeoPixelNotifier_NeoPixelStateChart_OnEntry(int state, struct NeoPixelNotifier_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE:{
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE;
f_NeoPixelNotifier_initializeNeopixels(_instance);
NeoPixelNotifier_NeoPixelStateChart_OnEntry(_instance->NeoPixelNotifier_NeoPixelStateChart_State, _instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE:{
;uint8_t i = 0;
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, 0, 0, 0);
while(i < _instance->NeoPixelNotifier_neopixel_total_count_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE:{
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE:{
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var);
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE:{
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE:{
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var);
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;
}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE:{
;uint32_t rcolor = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixelNotifier_NeoPixelStateChart_OnExit(int state, struct NeoPixelNotifier_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE:{
NeoPixelNotifier_NeoPixelStateChart_OnExit(_instance->NeoPixelNotifier_NeoPixelStateChart_State, _instance);
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;}
case NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixelNotifier_handle_ctrl_breath(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_setRingColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var = red / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var = green / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var = blue / _instance->NeoPixelNotifier_ring_brightness_divider_var;
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifier_handle_ctrl_solid(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_blink_logo(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_setLogoColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var = red;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var = green;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var = blue;
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifier_handle_ctrl_off(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_setColor(struct NeoPixelNotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var = red / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var = green / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var = blue / _instance->NeoPixelNotifier_ring_brightness_divider_var;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var = red;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var = green;
_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var = blue;
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifier_handle_ctrl_pulse(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_blink(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_ctrl_rotate(struct NeoPixelNotifier_Instance *_instance, int8_t speed) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifier_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE;
_instance->NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var = speed;
NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifier_handle_clock_fps_clock(struct NeoPixelNotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint32_t rcolor = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var);
;uint32_t lcolor = f_NeoPixelNotifier_getColor(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
;uint16_t pangle = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var + (i * _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var) / (_instance->NeoPixelNotifier_neopixel_ring_last_var - _instance->NeoPixelNotifier_neopixel_ring_first_var + 1);
pangle = pangle % _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var;
;uint8_t bright = f_NeoPixelNotifier_rotate_brightness(_instance, pangle, _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var);
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var * bright) / 256);
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var + _instance->NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var < 0) {
_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var + _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var;

}
if(_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var > _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var - 1) {
_instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var - _instance->NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_breath_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var, _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var);
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_pulse_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var);
;uint32_t color = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_blink_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var);
;uint32_t rcolor = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_ring_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
;uint32_t lcolor = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var * bright) / 256);
i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifier_NeoPixelStateChart_State == NEOPIXELNOTIFIER_NEOPIXELSTATECHART_BLINKLOGO_STATE) {
if (NeoPixelNotifier_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifier_blink_brightness(_instance, _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var);
;uint32_t lcolor = f_NeoPixelNotifier_getColor(_instance, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifier_NeoPixelStateChart_l_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifier_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifier_neopixel_logo_last_var) {
f_NeoPixelNotifier_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifier_updateNeopixels(_instance);
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var = _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var + 1;
if(_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var == _instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_maxcount_var) {
_instance->NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var = 0;

}
NeoPixelNotifier_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}

// Observers for outgoing messages:






/*****************************************************************************
 * Definitions for configuration : TestNeoPixelNotifier
 *****************************************************************************/

//Declaration of instance variables
//Instance test
// Variables for the properties of the instance
struct NeoPixelNotifierTest_Instance test_var;
// Variables for the sessions of the instance
//Instance neo
// Variables for the properties of the instance
struct NeoPixelNotifier_Instance neo_var;
// Variables for the sessions of the instance


// Enqueue of messages NeoPixelNotifierTest::neopixels::breath
void enqueue_NeoPixelNotifierTest_send_neopixels_breath(struct NeoPixelNotifierTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::setRingColor
void enqueue_NeoPixelNotifierTest_send_neopixels_setRingColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter red
union u_red_t {
uint8_t p;
byte bytebuffer[1];
} u_red;
u_red.p = red;
_fifo_enqueue(u_red.bytebuffer[0] & 0xFF );

// parameter green
union u_green_t {
uint8_t p;
byte bytebuffer[1];
} u_green;
u_green.p = green;
_fifo_enqueue(u_green.bytebuffer[0] & 0xFF );

// parameter blue
union u_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_blue;
u_blue.p = blue;
_fifo_enqueue(u_blue.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::solid
void enqueue_NeoPixelNotifierTest_send_neopixels_solid(struct NeoPixelNotifierTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::blink_logo
void enqueue_NeoPixelNotifierTest_send_neopixels_blink_logo(struct NeoPixelNotifierTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::setLogoColor
void enqueue_NeoPixelNotifierTest_send_neopixels_setLogoColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter red
union u_red_t {
uint8_t p;
byte bytebuffer[1];
} u_red;
u_red.p = red;
_fifo_enqueue(u_red.bytebuffer[0] & 0xFF );

// parameter green
union u_green_t {
uint8_t p;
byte bytebuffer[1];
} u_green;
u_green.p = green;
_fifo_enqueue(u_green.bytebuffer[0] & 0xFF );

// parameter blue
union u_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_blue;
u_blue.p = blue;
_fifo_enqueue(u_blue.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::off
void enqueue_NeoPixelNotifierTest_send_neopixels_off(struct NeoPixelNotifierTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::setColor
void enqueue_NeoPixelNotifierTest_send_neopixels_setColor(struct NeoPixelNotifierTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter red
union u_red_t {
uint8_t p;
byte bytebuffer[1];
} u_red;
u_red.p = red;
_fifo_enqueue(u_red.bytebuffer[0] & 0xFF );

// parameter green
union u_green_t {
uint8_t p;
byte bytebuffer[1];
} u_green;
u_green.p = green;
_fifo_enqueue(u_green.bytebuffer[0] & 0xFF );

// parameter blue
union u_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_blue;
u_blue.p = blue;
_fifo_enqueue(u_blue.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::pulse
void enqueue_NeoPixelNotifierTest_send_neopixels_pulse(struct NeoPixelNotifierTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::rotate
void enqueue_NeoPixelNotifierTest_send_neopixels_rotate(struct NeoPixelNotifierTest_Instance *_instance, int8_t speed){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter speed
union u_speed_t {
int8_t p;
byte bytebuffer[1];
} u_speed;
u_speed.p = speed;
_fifo_enqueue(u_speed.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierTest::neopixels::blink
void enqueue_NeoPixelNotifierTest_send_neopixels_blink(struct NeoPixelNotifierTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}


//New dispatcher for messages
void dispatch_blink_logo(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_blink_logo(&neo_var);

}

}


//New dispatcher for messages
void dispatch_setColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_setColor(&neo_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_fps_clock(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
NeoPixelNotifier_handle_clock_fps_clock(&neo_var);

}

}


//New dispatcher for messages
void dispatch_rotate(uint16_t sender, int8_t param_speed) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_rotate(&neo_var, param_speed);

}

}


//New dispatcher for messages
void dispatch_breath(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_breath(&neo_var);

}

}


//New dispatcher for messages
void dispatch_setRingColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_setRingColor(&neo_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_solid(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_solid(&neo_var);

}

}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
NeoPixelNotifierTest_handle_clock_timer_timeout(&test_var, param_id);

}

}


//New dispatcher for messages
void dispatch_off(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_off(&neo_var);

}

}


//New dispatcher for messages
void dispatch_setLogoColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_setLogoColor(&neo_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_pulse(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_pulse(&neo_var);

}

}


//New dispatcher for messages
void dispatch_blink(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifier_handle_ctrl_blink(&neo_var);

}

}


int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_breath = 2;
dispatch_breath((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 4:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setRingColor = 2;
union u_setRingColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_red;
u_setRingColor_red.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
union u_setRingColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_green;
u_setRingColor_green.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
union u_setRingColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_blue;
u_setRingColor_blue.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
dispatch_setRingColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setRingColor_red.p /* red */ ,
 u_setRingColor_green.p /* green */ ,
 u_setRingColor_blue.p /* blue */ );
break;
}
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_solid = 2;
dispatch_solid((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 1:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_timer_timeout = 2;
union u_timer_timeout_id_t {
uint8_t p;
byte bytebuffer[1];
} u_timer_timeout_id;
u_timer_timeout_id.bytebuffer[0] = mbuf[mbufi_timer_timeout + 0];
mbufi_timer_timeout += 1;
dispatch_timer_timeout((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_timer_timeout_id.p /* id */ );
break;
}
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_blink_logo = 2;
dispatch_blink_logo((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 7:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setLogoColor = 2;
union u_setLogoColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_red;
u_setLogoColor_red.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
union u_setLogoColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_green;
u_setLogoColor_green.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
union u_setLogoColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_blue;
u_setLogoColor_blue.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
dispatch_setLogoColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setLogoColor_red.p /* red */ ,
 u_setLogoColor_green.p /* green */ ,
 u_setLogoColor_blue.p /* blue */ );
break;
}
case 8:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_off = 2;
dispatch_off((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 9:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setColor = 2;
union u_setColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_red;
u_setColor_red.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
union u_setColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_green;
u_setColor_green.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
union u_setColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_blue;
u_setColor_blue.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
dispatch_setColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setColor_red.p /* red */ ,
 u_setColor_green.p /* green */ ,
 u_setColor_blue.p /* blue */ );
break;
}
case 10:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_pulse = 2;
dispatch_pulse((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_fps_clock = 2;
dispatch_fps_clock((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 11:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_rotate = 2;
union u_rotate_speed_t {
int8_t p;
byte bytebuffer[1];
} u_rotate_speed;
u_rotate_speed.bytebuffer[0] = mbuf[mbufi_rotate + 0];
mbufi_rotate += 1;
dispatch_rotate((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_rotate_speed.p /* speed */ );
break;
}
case 12:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_blink = 2;
dispatch_blink((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
}

void forward_NeoPixelNotifierTest_send_clock_timer_cancel(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id){
if(_instance->id_clock == test_var.id_clock) {
forward_timer2_NeoPixelNotifierTest_send_clock_timer_cancel(_instance, id);
}
}
void forward_NeoPixelNotifierTest_send_clock_timer_start(struct NeoPixelNotifierTest_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_clock == test_var.id_clock) {
forward_timer2_NeoPixelNotifierTest_send_clock_timer_start(_instance, id, time);
}
}

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 1:
if(msgSize == 3) {
msgSizeOK = 1;}
break;
case 2:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
}

if(msgSizeOK == 1) {
if ( fifo_byte_available() > (msgSize + 2) ) {
	uint8_t i;
	for (i = 0; i < 2; i++) {
		_fifo_enqueue(msg[i]);
	}
	_fifo_enqueue((listener_id >> 8) & 0xFF);
	_fifo_enqueue(listener_id & 0xFF);
	for (i = 2; i < msgSize; i++) {
		_fifo_enqueue(msg[i]);
	}
}
}
}
}

void initialize_configuration_TestNeoPixelNotifier() {
// Initialize connectors
register_external_NeoPixelNotifierTest_send_clock_timer_start_listener(&forward_NeoPixelNotifierTest_send_clock_timer_start);
register_external_NeoPixelNotifierTest_send_clock_timer_cancel_listener(&forward_NeoPixelNotifierTest_send_clock_timer_cancel);
register_NeoPixelNotifierTest_send_neopixels_setColor_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_setColor);
register_NeoPixelNotifierTest_send_neopixels_setLogoColor_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_setLogoColor);
register_NeoPixelNotifierTest_send_neopixels_setRingColor_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_setRingColor);
register_NeoPixelNotifierTest_send_neopixels_off_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_off);
register_NeoPixelNotifierTest_send_neopixels_pulse_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_pulse);
register_NeoPixelNotifierTest_send_neopixels_rotate_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_rotate);
register_NeoPixelNotifierTest_send_neopixels_breath_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_breath);
register_NeoPixelNotifierTest_send_neopixels_solid_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_solid);
register_NeoPixelNotifierTest_send_neopixels_blink_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_blink);
register_NeoPixelNotifierTest_send_neopixels_blink_logo_listener(&enqueue_NeoPixelNotifierTest_send_neopixels_blink_logo);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance neo
neo_var.active = true;
neo_var.id_ctrl = add_instance( (void*) &neo_var);
neo_var.id_clock = add_instance( (void*) &neo_var);
neo_var.NeoPixelNotifier_NeoPixelStateChart_State = NEOPIXELNOTIFIER_NEOPIXELSTATECHART_PULSE_STATE;
neo_var.NeoPixelNotifier_NeoPixelStateChart_color_g_var = 10;
neo_var.NeoPixelNotifier_NeoPixelStateChart_BREATH_counter_var = 0;
neo_var.NeoPixelNotifier_NeoPixelStateChart_breath_speed_var = 100;
neo_var.NeoPixelNotifier_NeoPixelStateChart_BREATH_maxcount_var = 186;
neo_var.NeoPixelNotifier_neopixel_ring_last_var = 7;
neo_var.NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_counter_var = 0;
neo_var.NeoPixelNotifier_neopixel_logo_first_var = 8;
neo_var.NeoPixelNotifier_NeoPixelStateChart_rotate_speed_var = 4;
neo_var.NeoPixelNotifier_ring_brightness_divider_var = 1;
neo_var.NeoPixelNotifier_NeoPixelStateChart_PULSE_maxcount_var = 100;
neo_var.NeoPixelNotifier_NeoPixelStateChart_color_b_var = 0;
neo_var.NeoPixelNotifier_NeoPixelStateChart_color_r_var = 100;
neo_var.NeoPixelNotifier_neopixel_total_count_var = 10;
neo_var.NeoPixelNotifier_neopixel_pin_var = 7;
neo_var.NeoPixelNotifier_neopixel_logo_last_var = 9;
neo_var.NeoPixelNotifier_NeoPixelStateChart_BLINKALL_counter_var = 0;
neo_var.NeoPixelNotifier_NeoPixelStateChart_ROTATE_angle_var = 0;
neo_var.NeoPixelNotifier_NeoPixelStateChart_BLINKALL_maxcount_var = 22;
neo_var.NeoPixelNotifier_neopixel_ring_first_var = 0;
neo_var.NeoPixelNotifier_NeoPixelStateChart_l_color_g_var = 10;
neo_var.NeoPixelNotifier_NeoPixelStateChart_BLINKLOGO_maxcount_var = 22;
neo_var.NeoPixelNotifier_NeoPixelStateChart_ROTATE_maxangle_var = 200;
neo_var.NeoPixelNotifier_NeoPixelStateChart_l_color_r_var = 100;
neo_var.NeoPixelNotifier_NeoPixelStateChart_l_color_b_var = 0;
neo_var.NeoPixelNotifier_NeoPixelStateChart_PULSE_counter_var = 0;

NeoPixelNotifier_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIER_NEOPIXELSTATECHART_STATE, &neo_var);
// Init the ID, state variables and properties for instance test
test_var.active = true;
test_var.id_clock = add_instance( (void*) &test_var);
test_var.id_neopixels = add_instance( (void*) &test_var);
test_var.NeoPixelNotifierTest_Test_State = NEOPIXELNOTIFIERTEST_TEST_MEASURE_STATE;

NeoPixelNotifierTest_Test_OnEntry(NEOPIXELNOTIFIERTEST_TEST_STATE, &test_var);
}




void setup() {
initialize_configuration_TestNeoPixelNotifier();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener


    processMessageQueue();
}
