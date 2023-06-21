#ifndef CONFIGUREPARAMS_H
  #define CONFIGUREPARAMS_H

   int configureParams1D1thODE(double *initArgue, double *initValue, double *finalArgue, int *numberStep, char **msg );

   int configureParams3D2thODE(double *timeInitial, double *coordInitial,  double *velocityInitial,  double *timeFinal, int *numberStep);

#endif // CONFIGUREPARAMS_H
