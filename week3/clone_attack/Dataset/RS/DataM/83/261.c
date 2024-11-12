float kJrgFS1p8 (float h9BQA0v8) {
    if ((658 - 598) > h9BQA0v8)
        return (223 - 223);
    else if ((574 - 511) >= h9BQA0v8)
        return (835.0 - 834.0);
    else if ((371 - 304) >= h9BQA0v8)
        return (462.5 - 461.0);
    else if ((309 - 238) >= h9BQA0v8)
        return (94.0 - 92.0);
    else if ((814 - 740) >= h9BQA0v8)
        return (384.3 - 382.0);
    else if ((394 - 317) >= h9BQA0v8)
        return (759.7 - 757.0);
    else if (h9BQA0v8 <= 81)
        return (829 - 826);
    else if (h9BQA0v8 <= (761 - 677))
        return (134.3 - 131.0);
    else if (h9BQA0v8 <= (278 - 189))
        return (953.7 - 950.0);
    else
        return (876.0 - 872.0);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int ElZqAgPFtv9i;
    int dCt4Na;
    float OU1WD9XxwyGK = (342 - 342), MSW8Dxw = (130 - 130), a [(37 - 27)] = {(983 - 983)}, IFqOxha8IUj [(925 - 915)] = {(378 - 378)}, k2KCVh [(81 - 71)] = {(507 - 507)};
    scanf ("%d", &ElZqAgPFtv9i);
    for (dCt4Na = (526 - 526); dCt4Na < ElZqAgPFtv9i; dCt4Na = dCt4Na + 1) {
        scanf ("%f", &a[dCt4Na]);
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
        OU1WD9XxwyGK += (float) a[dCt4Na];
    }
    {
        dCt4Na = 781 - 781;
        while (dCt4Na < ElZqAgPFtv9i) {
            scanf ("%f", &IFqOxha8IUj[dCt4Na]);
            k2KCVh[dCt4Na] = kJrgFS1p8 (IFqOxha8IUj[dCt4Na]);
            MSW8Dxw = MSW8Dxw +a[dCt4Na] * k2KCVh[dCt4Na];
            dCt4Na = dCt4Na + 1;
        };
    }
    MSW8Dxw /= OU1WD9XxwyGK;
    printf ("%.2f\n", MSW8Dxw);
    return (908 - 908);
}

