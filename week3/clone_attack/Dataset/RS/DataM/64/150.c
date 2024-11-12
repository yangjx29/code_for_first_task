typedef struct   {
    int x;
    int y;
    int z;
}
point3D;
typedef struct   {
    int firstPointIndex;
    int lastPointIndex;
    float distance;
}
result;

float getDistance (point3D BSiHOuECxd, point3D p2) {
    int temp;
    temp = (BSiHOuECxd.x - p2.x) * (BSiHOuECxd.x - p2.x) + (BSiHOuECxd.y - p2.y) * (BSiHOuECxd.y - p2.y) + (BSiHOuECxd.z - p2.z) * (BSiHOuECxd.z - p2.z);
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
    return sqrtf ((float) temp);
}

int main () {
    point3D points [MAXPOINTS];
    result results [MAXRESULTS];
    result temp;
    int i;
    int j;
    int k;
    int pointNum;
    int resultNum;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &pointNum);
    resultNum = pointNum * (pointNum - 1) / 2;
    for (i = (128 - 128); i < pointNum; i = i + 1) {
        scanf ("%d", &points[i].x);
        scanf ("%d", &points[i].y);
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
        scanf ("%d", &points[i].z);
    }
    k = 0;
    for (i = 0; i < pointNum; i = i + 1) {
        for (j = i + 1; j < pointNum; j = j + 1) {
            results[k].firstPointIndex = i;
            results[k].lastPointIndex = j;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            results[k].distance = getDistance (points[i], points[j]);
            k++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (resultNum - 1 > i) {
            {
                j = 0;
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
                while (resultNum - i - 1 > j) {
                    if (results[j].distance < results[j + 1].distance) {
                        temp = results[j];
                        results[j] = results[j + 1];
                        results[j + 1] = temp;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; resultNum > i; i = i + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", points[results[i].firstPointIndex].x, points[results[i].firstPointIndex].y, points[results[i].firstPointIndex].z, points[results[i].lastPointIndex].x, points[results[i].lastPointIndex].y, points[results[i].lastPointIndex].z, results[i].distance);
    }
    return 0;
}

