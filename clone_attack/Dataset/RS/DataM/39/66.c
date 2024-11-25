struct   student {
    char q1E5voT [20];
    int LP3fIH5;
    int IRnrD9LWQvV;
    char Id9rsCKDH30l;
    char west;
    int izDhIGqL1W;
    int hV97cfEN;
};
int HIExBSQ4F (struct   student dS0aQcUETeA3) {
    dS0aQcUETeA3.hV97cfEN = (673 - 673);
    if (dS0aQcUETeA3.LP3fIH5 > 80 && dS0aQcUETeA3.izDhIGqL1W > (34 - 34))
        dS0aQcUETeA3.hV97cfEN += (8491 - 491);
    if (dS0aQcUETeA3.LP3fIH5 > 85 && dS0aQcUETeA3.IRnrD9LWQvV > 80)
        dS0aQcUETeA3.hV97cfEN += 4000;
    if (dS0aQcUETeA3.LP3fIH5 > 90)
        dS0aQcUETeA3.hV97cfEN += (2523 - 523);
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
    if (dS0aQcUETeA3.LP3fIH5 > 85 && dS0aQcUETeA3.west == 'Y')
        dS0aQcUETeA3.hV97cfEN += 1000;
    if (dS0aQcUETeA3.IRnrD9LWQvV > 80 && dS0aQcUETeA3.Id9rsCKDH30l == 'Y')
        dS0aQcUETeA3.hV97cfEN += 850;
    return (dS0aQcUETeA3.hV97cfEN);
}

void  main () {
    struct   student dS0aQcUETeA3 [100];
    int reuDUF, i, total = (801 - 801), de367k82J = (286 - 286), AgtI0M8U3F = 0;
    scanf ("%d", &reuDUF);
    {
        i = 0;
        while (i < reuDUF) {
            scanf ("%s %d %d %c %c %d", dS0aQcUETeA3[i].q1E5voT, &dS0aQcUETeA3[i].LP3fIH5, &dS0aQcUETeA3[i].IRnrD9LWQvV, &dS0aQcUETeA3[i].Id9rsCKDH30l, &dS0aQcUETeA3[i].west, &dS0aQcUETeA3[i].izDhIGqL1W);
            dS0aQcUETeA3[i].hV97cfEN = HIExBSQ4F (dS0aQcUETeA3[i]);
            total += dS0aQcUETeA3[i].hV97cfEN;
            if (dS0aQcUETeA3[i].hV97cfEN > de367k82J) {
                de367k82J = dS0aQcUETeA3[i].hV97cfEN;
                AgtI0M8U3F = i;
            }
            i++;
        };
    }
    printf ("%s\n%d\n%d", dS0aQcUETeA3[AgtI0M8U3F].q1E5voT, de367k82J, total);
}

