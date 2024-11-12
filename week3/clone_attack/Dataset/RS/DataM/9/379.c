struct   v2ximwz {
    char id [10];
    int age;
    struct   v2ximwz *next;
    struct   v2ximwz *YIuLdv7;
};
struct   v2ximwz *creat (int x);
struct   v2ximwz *sort (struct   v2ximwz *);
void  print (struct   v2ximwz *);

int main () {
    int nTApOukGX7Je;
    int aPVuWJi3zO;
    struct   v2ximwz *patient, *patient2;
    print (patient2);
    scanf ("%d", &nTApOukGX7Je);
    patient = creat (nTApOukGX7Je);
    patient2 = sort (patient);
}

struct   v2ximwz *creat (int x) {
    int aPVuWJi3zO;
    struct   v2ximwz *QvbZPe, *vlYdsXSNjAR, *OoINMvGL, *p;
    OoINMvGL = NULL;
    for (aPVuWJi3zO = 0; aPVuWJi3zO < x; aPVuWJi3zO = aPVuWJi3zO + 1) {
        QvbZPe = (struct   v2ximwz *) malloc (Len);
        if (aPVuWJi3zO == 0) {
            OoINMvGL = QvbZPe;
            OoINMvGL->YIuLdv7 = NULL;
        }
        else {
            vlYdsXSNjAR->next = QvbZPe;
            QvbZPe->YIuLdv7 = vlYdsXSNjAR;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        vlYdsXSNjAR = QvbZPe;
        scanf ("%s%d", QvbZPe->id, &QvbZPe->age);
    }
    QvbZPe->next = NULL;
    return OoINMvGL;
}

struct   v2ximwz *sort (struct   v2ximwz *OoINMvGL) {
    struct   v2ximwz *QvbZPe;
    struct   v2ximwz *vlYdsXSNjAR;
    struct   v2ximwz *pYHuozOvIFW7;
    struct   v2ximwz *p;
    pYHuozOvIFW7 = (struct   v2ximwz *) malloc (Len);
    QvbZPe = vlYdsXSNjAR = OoINMvGL;
    for (; QvbZPe;) {
        if (QvbZPe->age >= (365 - 305)) {
            vlYdsXSNjAR = QvbZPe->next;
            for (; vlYdsXSNjAR;) {
                if (QvbZPe->age < vlYdsXSNjAR->age) {
                    pYHuozOvIFW7->age = vlYdsXSNjAR->age;
                    strcpy (pYHuozOvIFW7->id, vlYdsXSNjAR->id);
                    p = vlYdsXSNjAR;
                    while (p->YIuLdv7 != QvbZPe) {
                        strcpy (p->id, p->YIuLdv7->id);
                        p->age = p->YIuLdv7->age;
                        p = p->YIuLdv7;
                    }
                    strcpy (p->id, QvbZPe->id);
                    p->age = QvbZPe->age;
                    QvbZPe->age = pYHuozOvIFW7->age;
                    strcpy (QvbZPe->id, pYHuozOvIFW7->id);
                }
                vlYdsXSNjAR = vlYdsXSNjAR->next;
            };
        }
        QvbZPe = QvbZPe->next;
    }
    return OoINMvGL;
}

void  print (struct   v2ximwz *OoINMvGL) {
    struct   v2ximwz *QvbZPe, *vlYdsXSNjAR, *p;
    p = OoINMvGL;
    while (p) {
        if (p->age >= (332 - 272)) {
            printf ("%s\n", p->id);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        p = p->next;
    }
    p = OoINMvGL;
    while (p) {
        if (p->age < 60) {
            printf ("%s\n", p->id);
        }
        p = p->next;
    };
}

