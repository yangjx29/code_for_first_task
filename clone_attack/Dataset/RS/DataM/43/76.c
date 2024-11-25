int main () {
    int it14GOIy;
    int PCbq9v3;
    int GUOwSZycJbe;
    int XMaNlvm0RtG;
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
    scanf ("%d", &it14GOIy);
    for (PCbq9v3 = 2; (it14GOIy / 2) >= PCbq9v3; PCbq9v3 = PCbq9v3 +1) {
        GUOwSZycJbe = it14GOIy - PCbq9v3;
        for (XMaNlvm0RtG = 2; PCbq9v3 > XMaNlvm0RtG; XMaNlvm0RtG = XMaNlvm0RtG +1) {
            if (!(0 == PCbq9v3 % XMaNlvm0RtG))
                continue;
            else
                goto PCbq9v3;
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
            };
        }
        for (XMaNlvm0RtG = 2; XMaNlvm0RtG < GUOwSZycJbe; XMaNlvm0RtG = XMaNlvm0RtG +1) {
            if (GUOwSZycJbe % XMaNlvm0RtG != 0)
                continue;
            else
                goto PCbq9v3;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d %d\n", PCbq9v3, GUOwSZycJbe);
    PCbq9v3 :
        continue;
    }
    return 0;
}

