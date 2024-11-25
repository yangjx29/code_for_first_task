int main () {
    char an [(1175 - 674)];
    char bn [(756 - 255)];
    float a;
    float rate;
    int sum;
    int i;
    int GtraZUIvpb;
    int lenb;
    sum = (673 - 673);
    scanf ("%f", &a);
    scanf ("%s", an);
    scanf ("%s", bn);
    GtraZUIvpb = strlen (an);
    lenb = strlen (bn);
    if (GtraZUIvpb != lenb) {
        return (499 - 499);
    }
    for (i = 0; GtraZUIvpb > i; i = i + 1) {
        if ((an[i] != 'A' && an[i] != 'T' && an[i] != 'C' && an[i] != 'G') || (bn[i] != 'A' && bn[i] != 'T' && bn[i] != 'C' && bn[i] != 'G')) {
            return 0;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < GtraZUIvpb) {
            if (an[i] == bn[i])
                sum += 1;
            i++;
        };
    }
    rate = 1.0 * sum / GtraZUIvpb;
    if (rate > a)
        ;
    else
        printf ("no");
    return 0;
}

