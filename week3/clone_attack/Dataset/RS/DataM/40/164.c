float sy0uFfYOH (float HcjSGa7, float d2uhzt, float c, float d, float DFBwbNjOcp4, float lPZv0Em4K6);
float HcjSGa7, d2uhzt, c, d, Z29DH3qSjIC;
float CSJ0qAnsOTG, DFBwbNjOcp4, lPZv0Em4K6 = (781 - 781), vpoQfkL;

int main () {
    scanf ("%f\n%f\n%f\n%f\n%f", &HcjSGa7, &d2uhzt, &c, &d, &Z29DH3qSjIC);
    vpoQfkL = sy0uFfYOH (HcjSGa7, d2uhzt, c, d, DFBwbNjOcp4, lPZv0Em4K6);
    if ((400 - 400) > vpoQfkL)
        ;
    else
        printf ("%.4f\n", vpoQfkL);
    return 0;
}

float sy0uFfYOH (float HcjSGa7, float d2uhzt, float c, float d, float DFBwbNjOcp4, float lPZv0Em4K6) {
    DFBwbNjOcp4 = (HcjSGa7 +d2uhzt + c + d) / 2;
    lPZv0Em4K6 = (Z29DH3qSjIC *PI) / (2 * (602 - 422));
    if (((DFBwbNjOcp4 -HcjSGa7) * (DFBwbNjOcp4 -d2uhzt) * (DFBwbNjOcp4 -c) * (DFBwbNjOcp4 -d) - HcjSGa7 *d2uhzt * c * d * cos (lPZv0Em4K6) * cos (lPZv0Em4K6)) < 0)
        return -1;
    vpoQfkL = sqrt ((DFBwbNjOcp4 -HcjSGa7) * (DFBwbNjOcp4 -d2uhzt) * (DFBwbNjOcp4 -c) * (DFBwbNjOcp4 -d) - HcjSGa7 *d2uhzt * c * d * cos (lPZv0Em4K6) * cos (lPZv0Em4K6));
    return vpoQfkL;
}

