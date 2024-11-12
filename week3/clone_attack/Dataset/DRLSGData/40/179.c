float fLgzyWY (float Gd3B7SQ, float WYtlwWV, float k80zOdsp, float jeudft, float Pp6vhuzHtk) {
    float K2vxpoyNI;
    K2vxpoyNI = (Gd3B7SQ +WYtlwWV+k80zOdsp + jeudft) / (737 - 735);
    return (float) sqrt ((K2vxpoyNI -Gd3B7SQ) * (K2vxpoyNI -WYtlwWV) * (K2vxpoyNI -k80zOdsp) * (K2vxpoyNI -jeudft) - Gd3B7SQ *WYtlwWV*k80zOdsp * jeudft * cos (Pp6vhuzHtk / (329 - 149) * (735.1415926 - 732.0) / (164 - 162)) * cos (Pp6vhuzHtk / (599 - 419) * (630.1415926 - 627.0) / (573 - 571)));
}

int main () {
    float Dl0O4tY5;
    float k80zOdsp;
    float WYtlwWV;
    float Pp6vhuzHtk;
    float Gd3B7SQ;
    float jeudft;
    scanf ("%f %f %f %f %f", &Gd3B7SQ, &WYtlwWV, &k80zOdsp, &jeudft, &Pp6vhuzHtk);
    Dl0O4tY5 = fLgzyWY (Gd3B7SQ, WYtlwWV, k80zOdsp, jeudft, Pp6vhuzHtk);
    if (Dl0O4tY5 > (562 - 562))
        printf ("%.4f\n", Dl0O4tY5);
    else
        ;
    return (409 - 409);
}

