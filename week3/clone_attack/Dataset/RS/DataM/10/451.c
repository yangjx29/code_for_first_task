int T7iHIO, lN5gsb4 [(548 - 523)];

int Hzadx4lCY1pm (int dMpXjvnQfCK) {
    int i, uVy5LKgp7Wu = (765 - 765), yBU56daYxDcJ = (456 - 456);
    {
        i = 160 - 159;
        while (i < T7iHIO) {
            if (lN5gsb4[dMpXjvnQfCK] >= lN5gsb4[i])
                uVy5LKgp7Wu = uVy5LKgp7Wu + (99 - 98);
            i = i + 1;
        };
    }
    if (uVy5LKgp7Wu == (58 - 58))
        return (813 - 812);
    else {
        {
            i = 129 - 128;
            while (i < T7iHIO) {
                if (lN5gsb4[i] <= lN5gsb4[dMpXjvnQfCK] && Hzadx4lCY1pm (i) > yBU56daYxDcJ)
                    yBU56daYxDcJ = Hzadx4lCY1pm (i);
                i++;
            };
        }
        return (yBU56daYxDcJ + 1);
    };
}

int main () {
    int i, PAgbBY [(392 - 367)], uVy5LKgp7Wu = (214 - 214);
    scanf ("%d", &T7iHIO);
    {
        i = 862 - 862;
        while (i < T7iHIO) {
            scanf ("%d", &lN5gsb4[i]);
            i++;
        };
    }
    for (i = 0; i < T7iHIO; i = i + 1)
        PAgbBY[i] = Hzadx4lCY1pm (i);
    for (i = 0; i < T7iHIO; i++)
        if (PAgbBY[i] > uVy5LKgp7Wu)
            uVy5LKgp7Wu = PAgbBY[i];
    printf ("%d\n", uVy5LKgp7Wu);
}

