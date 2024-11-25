int main (int argc, char *argv []) {
    struct   student {
        int id;
        int x;
        int y;
        int z;
    }
    student1;
    struct   student {
        int id;
        int x;
        int y;
        int z;
    }
    hBNISWHFPCM9;
    struct   student {
        int id;
        int x;
        int y;
        int z;
    }
    student3;
    struct   student {
        int id;
        int x;
        int y;
        int z;
    }
    studenta;
    int n, i;
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
    scanf ("%d", &n);
    student1.z = hBNISWHFPCM9.z = student3.z = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i++;
            scanf ("%d%d%d", &studenta.id, &studenta.x, &studenta.y);
            studenta.z = studenta.x + studenta.y;
            if (student1.z < studenta.z) {
                student3.z = hBNISWHFPCM9.z;
                student3.id = hBNISWHFPCM9.id;
                hBNISWHFPCM9.z = student1.z;
                hBNISWHFPCM9.id = student1.id;
                student1.z = studenta.z;
                student1.id = studenta.id;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (studenta.z > hBNISWHFPCM9.z) {
                    student3.z = hBNISWHFPCM9.z;
                    student3.id = hBNISWHFPCM9.id;
                    hBNISWHFPCM9.z = studenta.z;
                    hBNISWHFPCM9.id = studenta.id;
                }
                else {
                    if (studenta.z > student3.z) {
                        student3.z = studenta.z;
                        student3.id = studenta.id;
                    };
                };
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", student1.id, student1.z, hBNISWHFPCM9.id, hBNISWHFPCM9.z, student3.id, student3.z);
    return 0;
}

