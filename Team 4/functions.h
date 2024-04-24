/*
    Team 3's robot arm used a motor-powered joint instead of a servo joint.
    
    The robot arm could be lifted by running the motor and using msleep()
    to determine how long to move the pulley for.
*/

/* Wind up the pulley string (Pull up the arm) */
void pulleyUp();

/* Wind down the pulley string (Lower the arm) */
void pulleyDown();