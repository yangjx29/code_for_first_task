int main (int argc, char *ORofawlWqKis []) {
    int hwDmsa5q2pi;
    int vlJdq1fmLM5;
    int szeqoZOT5My;
    cin >> hwDmsa5q2pi;
    double  Zu1e0WTbo7v, utnLoqcbvYB;
    double  gW8eoPbl4 [100], jm6DwPs3BVoF [100];
    for (vlJdq1fmLM5 = 0; hwDmsa5q2pi > vlJdq1fmLM5; vlJdq1fmLM5 = vlJdq1fmLM5 + 1) {
        cin >> gW8eoPbl4[vlJdq1fmLM5] >> jm6DwPs3BVoF[vlJdq1fmLM5];
    }
    double  U790Hho1 (double  m, double  hwDmsa5q2pi, double  mblHtQG, double  PNq4HL);
    double  VBdSJWcnx (double  m, double  hwDmsa5q2pi);
    Zu1e0WTbo7v = 0;
    for (vlJdq1fmLM5 = 0; vlJdq1fmLM5 < hwDmsa5q2pi; vlJdq1fmLM5 = vlJdq1fmLM5 + 1) {
        for (szeqoZOT5My = vlJdq1fmLM5 + 1; hwDmsa5q2pi > szeqoZOT5My; szeqoZOT5My++) {
            utnLoqcbvYB = U790Hho1 (gW8eoPbl4[vlJdq1fmLM5], jm6DwPs3BVoF[vlJdq1fmLM5], gW8eoPbl4[szeqoZOT5My], jm6DwPs3BVoF[szeqoZOT5My]);
            Zu1e0WTbo7v = VBdSJWcnx (utnLoqcbvYB, Zu1e0WTbo7v);
        }
    }
    cout << fixed << setprecision (4) << Zu1e0WTbo7v << endl;
    return 0;
}

double  U790Hho1 (double  m, double  hwDmsa5q2pi, double  mblHtQG, double  PNq4HL) {
    double  oCGHIe0M2;
    oCGHIe0M2 = pow (m - mblHtQG, 2) + pow (hwDmsa5q2pi - PNq4HL, 2);
    oCGHIe0M2 = pow (oCGHIe0M2, 0.5);
    return oCGHIe0M2;
}

double  VBdSJWcnx (double  m, double  hwDmsa5q2pi) {
    double  oCGHIe0M2;
    if (m > hwDmsa5q2pi)
        oCGHIe0M2 = m;
    else
        oCGHIe0M2 = hwDmsa5q2pi;
    return oCGHIe0M2;
}

