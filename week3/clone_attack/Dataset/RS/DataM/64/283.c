struct   space {
    float zWf6jFG8S;
    int QSjo0w4LX;
    int y;
}
x6ej7N [100], AAljZr6;

int main () {
    int dWForQP, elxi7vsRQKPU;
    int oQlr8f;
    int KMB2kVxNqr8 [10] [3];
    int ZawqMIOCZKml, fC9iloMOu, lpsWN8 = 0;
    scanf ("%d", &oQlr8f);
    scanf ("%d %d %d", &KMB2kVxNqr8[0][0], &KMB2kVxNqr8[0][1], &KMB2kVxNqr8[0][2]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (ZawqMIOCZKml = 1; ZawqMIOCZKml < oQlr8f; ZawqMIOCZKml++) {
        scanf (" %d %d %d", &KMB2kVxNqr8[ZawqMIOCZKml][0], &KMB2kVxNqr8[ZawqMIOCZKml][1], &KMB2kVxNqr8[ZawqMIOCZKml][2]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (ZawqMIOCZKml = 0, fC9iloMOu = 0;;) {
        x6ej7N[lpsWN8].QSjo0w4LX = ZawqMIOCZKml;
        x6ej7N[lpsWN8].y = fC9iloMOu;
        x6ej7N[lpsWN8].zWf6jFG8S = sqrt ((KMB2kVxNqr8[ZawqMIOCZKml][0] - KMB2kVxNqr8[fC9iloMOu][0]) * (KMB2kVxNqr8[ZawqMIOCZKml][0] - KMB2kVxNqr8[fC9iloMOu][0]) + (KMB2kVxNqr8[ZawqMIOCZKml][1] - KMB2kVxNqr8[fC9iloMOu][1]) * (KMB2kVxNqr8[ZawqMIOCZKml][1] - KMB2kVxNqr8[fC9iloMOu][1]) + (KMB2kVxNqr8[ZawqMIOCZKml][2] - KMB2kVxNqr8[fC9iloMOu][2]) * (KMB2kVxNqr8[ZawqMIOCZKml][2] - KMB2kVxNqr8[fC9iloMOu][2]));
        lpsWN8 = lpsWN8 + 1;
        if (ZawqMIOCZKml == oQlr8f - 1 && fC9iloMOu == oQlr8f - 1)
            break;
        if (fC9iloMOu == oQlr8f - 1) {
            ZawqMIOCZKml = ZawqMIOCZKml +1;
            fC9iloMOu = 0;
        }
        else
            fC9iloMOu++;
    }
    for (ZawqMIOCZKml = 0; ZawqMIOCZKml < oQlr8f * oQlr8f; ZawqMIOCZKml++) {
        for (lpsWN8 = 0; lpsWN8 < oQlr8f * oQlr8f - ZawqMIOCZKml; lpsWN8++) {
            if (x6ej7N[lpsWN8].zWf6jFG8S < x6ej7N[lpsWN8 + 1].zWf6jFG8S) {
                AAljZr6 = x6ej7N[lpsWN8 + 1];
                x6ej7N[lpsWN8 + 1] = x6ej7N[lpsWN8];
                x6ej7N[lpsWN8] = AAljZr6;
            };
        };
    }
    for (ZawqMIOCZKml = 0; ZawqMIOCZKml < oQlr8f * oQlr8f; ZawqMIOCZKml++) {
        if (x6ej7N[ZawqMIOCZKml].QSjo0w4LX >= x6ej7N[ZawqMIOCZKml].y)
            continue;
        else {
            dWForQP = x6ej7N[ZawqMIOCZKml].QSjo0w4LX;
            elxi7vsRQKPU = x6ej7N[ZawqMIOCZKml].y;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", KMB2kVxNqr8[dWForQP][0], KMB2kVxNqr8[dWForQP][1], KMB2kVxNqr8[dWForQP][2], KMB2kVxNqr8[elxi7vsRQKPU][0], KMB2kVxNqr8[elxi7vsRQKPU][1], KMB2kVxNqr8[elxi7vsRQKPU][2], x6ej7N[ZawqMIOCZKml].zWf6jFG8S);
        };
    }
    return 0;
}

