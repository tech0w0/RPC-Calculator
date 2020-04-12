#include "idl.h"
#include <stdio.h>

float *
add_6_svc(values *argp, struct svc_req *rqstp)
{
	static float  result;
	printf("Calculation called: (%f + %f)\n", argp->num1, argp->num2);
	result = argp->num1 + argp->num2;
	printf("Result returned: %f\n", result);
	return &result;
}

float *
sub_6_svc(values *argp, struct svc_req *rqstp)
{
	static float  result;
	printf("Calculation called: (%f - %f)\n", argp->num1, argp->num2);
	result = argp->num1 - argp->num2;
	printf("Result returned: %f\n", result);
	return &result;
}

float *
mul_6_svc(values *argp, struct svc_req *rqstp)
{
	static float  result;
	printf("Calculation called: (%f * %f)\n", argp->num1, argp->num2);
	result = argp->num1 * argp->num2;
	printf("Result returned: %f\n", result);
	return &result;
}

float *
div_6_svc(values *argp, struct svc_req *rqstp)
{
	static float  result;
	printf("Calculation called: (%f / %f)\n", argp->num1, argp->num2);
	result = argp->num1 / argp->num2;
	printf("Result returned: %f\n", result);
	return &result;
}
