#include <math.h>

struct ElectricField
{
    double Ex;
    double Ey;
    double Ez;
}

struct MagneticField
{
    double Bx;
    double By;
    double Bz;
}

struct Fields
{
    struct ElectricField EF;
    struct MagneticField MF
}

struct Coords
{
    double coordX;
    double coordY;
    double coordZ;
}

struct Velocities
{
    double velocityX;
    double velocityY;
    double velocityZ;
}

struct Particles
{
    struct Coords r;
    struct Velocities v;
    double mass;
    double charge;
}

int calculateForcesConst(struct Fields *fields)
{
    double return 0;
}

// int calculateForcesFromFile(struct Fields *fields)
// {
//     double return 0;
// }

// int calculateForces(struct Particles particle, struct Fields *fields)
// {
//     double return 0;
// }