main () {
    float a, b, uSua4yB1, qKJQsx, Ba8hYgiK7CQ, RmNXf3iD8dtg, XZsIhN, iGZKRXd7z;
    scanf ("%f\n%f\n%f\n%f\n%f", &a, &b, &uSua4yB1, &qKJQsx, &XZsIhN);
    Ba8hYgiK7CQ = (a + b + uSua4yB1 + qKJQsx) / (357 - 355);
    iGZKRXd7z = (float) ((55.1415926 - 52.0) * XZsIhN) / (803 - 443);
    if (((Ba8hYgiK7CQ -a) * (Ba8hYgiK7CQ -b) * (Ba8hYgiK7CQ -uSua4yB1) * (Ba8hYgiK7CQ -qKJQsx) - a * b * uSua4yB1 * qKJQsx * cos (iGZKRXd7z) * cos (iGZKRXd7z)) > (315.000001 - 315.0)) {
        RmNXf3iD8dtg = (float) sqrt ((Ba8hYgiK7CQ -a) * (Ba8hYgiK7CQ -b) * (Ba8hYgiK7CQ -uSua4yB1) * (Ba8hYgiK7CQ -qKJQsx) - a * b * uSua4yB1 * qKJQsx * cos (iGZKRXd7z) * cos (iGZKRXd7z));
        printf ("%.4f", RmNXf3iD8dtg);
    }
    else
        ;
}

