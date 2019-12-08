/** Generated by YAKINDU Statechart Tools code generator. */

#ifndef TRASH_CARRIER_H_
#define TRASH_CARRIER_H_

#include "../platform_kobuki.h"
#include "../platform_bluetooth.h"
#include "../helper_funcs.h"
#include "../src/sc_types.h"

#ifdef __cplusplus
extern "C" { 
#endif 

/*! \file Header of the state machine 'trash_carrier'.
*/

/*! Define number of states in the state enum */

#define TRASH_CARRIER_STATE_COUNT 5

/*! Define dimension of the state configuration vector for orthogonal states. */
#define TRASH_CARRIER_MAX_ORTHOGONAL_STATES 2


/*! Define indices of states in the StateConfVector */
#define SCVI_TRASH_CARRIER_PATH_FINDING_REGION_STATION 0
#define SCVI_TRASH_CARRIER_PATH_FINDING_REGION_FOLLOWING 0
#define SCVI_TRASH_CARRIER_ROTATING_REGION_REST 1
#define SCVI_TRASH_CARRIER_ROTATING_REGION_ROTATING_LEFT 1
#define SCVI_TRASH_CARRIER_ROTATING_REGION_ROTATING_RIGHT 1

/*! Enumeration of all states */ 
typedef enum
{
	Trash_carrier_last_state,
	Trash_carrier_Path_Finding_Region_Station,
	Trash_carrier_Path_Finding_Region_Following,
	Trash_carrier_Rotating_region_Rest,
	Trash_carrier_Rotating_region_Rotating_Left,
	Trash_carrier_Rotating_region_Rotating_Right
} Trash_carrierStates;







/*! Type definition of the data structure for the Trash_carrierIface interface scope. */
typedef struct
{
	int32_t inv_Kp;
	int32_t inv_Kd;
	int32_t error;
	int32_t last_error;
	int32_t turn_speed;
	int16_t base_speed;
	int16_t speed_left;
	int16_t speed_right;
	sc_boolean has_vec;
	uint8_t v_start_x;
	uint8_t v_start_y;
	uint8_t v_end_x;
	uint8_t v_end_y;
	float rotation;
	float rotation_diff;
	float rotation_delta;
} Trash_carrierIface;




/*! 
 * Type definition of the data structure for the Trash_carrier state machine.
 * This data structure has to be allocated by the client code. 
 */
typedef struct
{
	Trash_carrierStates stateConfVector[TRASH_CARRIER_MAX_ORTHOGONAL_STATES];
	sc_ushort stateConfVectorPosition; 
	
	Trash_carrierIface iface;
} Trash_carrier;



/*! Initializes the Trash_carrier state machine data structures. Must be called before first usage.*/
extern void trash_carrier_init(Trash_carrier* handle);

/*! Activates the state machine */
extern void trash_carrier_enter(Trash_carrier* handle);

/*! Deactivates the state machine */
extern void trash_carrier_exit(Trash_carrier* handle);

/*! Performs a 'run to completion' step. */
extern void trash_carrier_runCycle(Trash_carrier* handle);


/*! Gets the value of the variable 'inv_Kp' that is defined in the default interface scope. */ 
extern int32_t trash_carrierIface_get_inv_Kp(const Trash_carrier* handle);
/*! Sets the value of the variable 'inv_Kp' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_inv_Kp(Trash_carrier* handle, int32_t value);
/*! Gets the value of the variable 'inv_Kd' that is defined in the default interface scope. */ 
extern int32_t trash_carrierIface_get_inv_Kd(const Trash_carrier* handle);
/*! Sets the value of the variable 'inv_Kd' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_inv_Kd(Trash_carrier* handle, int32_t value);
/*! Gets the value of the variable 'error' that is defined in the default interface scope. */ 
extern int32_t trash_carrierIface_get_error(const Trash_carrier* handle);
/*! Sets the value of the variable 'error' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_error(Trash_carrier* handle, int32_t value);
/*! Gets the value of the variable 'last_error' that is defined in the default interface scope. */ 
extern int32_t trash_carrierIface_get_last_error(const Trash_carrier* handle);
/*! Sets the value of the variable 'last_error' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_last_error(Trash_carrier* handle, int32_t value);
/*! Gets the value of the variable 'turn_speed' that is defined in the default interface scope. */ 
extern int32_t trash_carrierIface_get_turn_speed(const Trash_carrier* handle);
/*! Sets the value of the variable 'turn_speed' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_turn_speed(Trash_carrier* handle, int32_t value);
/*! Gets the value of the variable 'base_speed' that is defined in the default interface scope. */ 
extern int16_t trash_carrierIface_get_base_speed(const Trash_carrier* handle);
/*! Sets the value of the variable 'base_speed' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_base_speed(Trash_carrier* handle, int16_t value);
/*! Gets the value of the variable 'speed_left' that is defined in the default interface scope. */ 
extern int16_t trash_carrierIface_get_speed_left(const Trash_carrier* handle);
/*! Sets the value of the variable 'speed_left' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_speed_left(Trash_carrier* handle, int16_t value);
/*! Gets the value of the variable 'speed_right' that is defined in the default interface scope. */ 
extern int16_t trash_carrierIface_get_speed_right(const Trash_carrier* handle);
/*! Sets the value of the variable 'speed_right' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_speed_right(Trash_carrier* handle, int16_t value);
/*! Gets the value of the variable 'has_vec' that is defined in the default interface scope. */ 
extern sc_boolean trash_carrierIface_get_has_vec(const Trash_carrier* handle);
/*! Sets the value of the variable 'has_vec' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_has_vec(Trash_carrier* handle, sc_boolean value);
/*! Gets the value of the variable 'v_start_x' that is defined in the default interface scope. */ 
extern uint8_t trash_carrierIface_get_v_start_x(const Trash_carrier* handle);
/*! Sets the value of the variable 'v_start_x' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_v_start_x(Trash_carrier* handle, uint8_t value);
/*! Gets the value of the variable 'v_start_y' that is defined in the default interface scope. */ 
extern uint8_t trash_carrierIface_get_v_start_y(const Trash_carrier* handle);
/*! Sets the value of the variable 'v_start_y' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_v_start_y(Trash_carrier* handle, uint8_t value);
/*! Gets the value of the variable 'v_end_x' that is defined in the default interface scope. */ 
extern uint8_t trash_carrierIface_get_v_end_x(const Trash_carrier* handle);
/*! Sets the value of the variable 'v_end_x' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_v_end_x(Trash_carrier* handle, uint8_t value);
/*! Gets the value of the variable 'v_end_y' that is defined in the default interface scope. */ 
extern uint8_t trash_carrierIface_get_v_end_y(const Trash_carrier* handle);
/*! Sets the value of the variable 'v_end_y' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_v_end_y(Trash_carrier* handle, uint8_t value);
/*! Gets the value of the variable 'rotation' that is defined in the default interface scope. */ 
extern float trash_carrierIface_get_rotation(const Trash_carrier* handle);
/*! Sets the value of the variable 'rotation' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_rotation(Trash_carrier* handle, float value);
/*! Gets the value of the variable 'rotation_diff' that is defined in the default interface scope. */ 
extern float trash_carrierIface_get_rotation_diff(const Trash_carrier* handle);
/*! Sets the value of the variable 'rotation_diff' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_rotation_diff(Trash_carrier* handle, float value);
/*! Gets the value of the variable 'rotation_delta' that is defined in the default interface scope. */ 
extern float trash_carrierIface_get_rotation_delta(const Trash_carrier* handle);
/*! Sets the value of the variable 'rotation_delta' that is defined in the default interface scope. */ 
extern void trash_carrierIface_set_rotation_delta(Trash_carrier* handle, float value);

/*!
 * Checks whether the state machine is active (until 2.4.1 this method was used for states).
 * A state machine is active if it was entered. It is inactive if it has not been entered at all or if it has been exited.
 */
extern sc_boolean trash_carrier_isActive(const Trash_carrier* handle);

/*!
 * Checks if all active states are final. 
 * If there are no active states then the state machine is considered being inactive. In this case this method returns false.
 */
extern sc_boolean trash_carrier_isFinal(const Trash_carrier* handle);

/*! Checks if the specified state is active (until 2.4.1 the used method for states was called isActive()). */
extern sc_boolean trash_carrier_isStateActive(const Trash_carrier* handle, Trash_carrierStates state);


#ifdef __cplusplus
}
#endif 

#endif /* TRASH_CARRIER_H_ */
