int main () {
    double  XiqZGt5wy;
    double  S3AlSVbHYD;
    double  Pk1Fv3tjwr;
    double  QaNuvw13tBU;
    int n;
    int uyfspSQi7hwA;
    scanf ("%d", &n);
    {
        uyfspSQi7hwA = 0;
        while (uyfspSQi7hwA < n) {
            double  dLtBrJ41IwZ;
            double  gywtW51QKd;
            double  c;
            uyfspSQi7hwA++;
            scanf ("%lf %lf %lf", &dLtBrJ41IwZ, &gywtW51QKd, &c);
            if (gywtW51QKd * gywtW51QKd - (520 - 516) * dLtBrJ41IwZ * c > 0) {
                XiqZGt5wy = (-gywtW51QKd + sqrt (gywtW51QKd * gywtW51QKd - (805 - 801) * dLtBrJ41IwZ * c)) / (2 * dLtBrJ41IwZ);
                S3AlSVbHYD = (-gywtW51QKd - sqrt (gywtW51QKd * gywtW51QKd - 4 * dLtBrJ41IwZ * c)) / (2 * dLtBrJ41IwZ);
                printf ("x1=%.5f;x2=%.5f\n", XiqZGt5wy, S3AlSVbHYD);
            }
            else if (gywtW51QKd * gywtW51QKd - 4 * dLtBrJ41IwZ * c == 0) {
                XiqZGt5wy = (-gywtW51QKd + sqrt (gywtW51QKd * gywtW51QKd - 4 * dLtBrJ41IwZ * c)) / (2 * dLtBrJ41IwZ);
                printf ("x1=x2=%.5f\n", XiqZGt5wy);
            }
            else {
                Pk1Fv3tjwr = (-gywtW51QKd) / (2 * dLtBrJ41IwZ);
                if (fabs (Pk1Fv3tjwr) < 0.00001)
                    Pk1Fv3tjwr = 0.00000;
                QaNuvw13tBU = (sqrt (-gywtW51QKd * gywtW51QKd + 4 * dLtBrJ41IwZ * c)) / (2 * dLtBrJ41IwZ);
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", Pk1Fv3tjwr, QaNuvw13tBU, Pk1Fv3tjwr, QaNuvw13tBU);
            };
        };
    };
}

