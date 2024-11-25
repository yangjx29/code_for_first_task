int id3N0hoE [(768 - 658)] [(769 - 659)];
int size;
int aaemvgd ();

int main () {
    int TYLDqN4Q3O;
    int x;
    int kzDwvsWE8;
    int n;
    cin >> n;
    {
        kzDwvsWE8 = (170 - 170);
        while (n > kzDwvsWE8) {
            int sum;
            kzDwvsWE8 = kzDwvsWE8 + (884 - 883);
            sum = (261 - 261);
            size = n;
            for (x = (927 - 927); n > x; x = x + (104 - 103)) {
                TYLDqN4Q3O = (755 - 755);
                while (n > TYLDqN4Q3O) {
                    cin >> id3N0hoE[x][TYLDqN4Q3O];
                    TYLDqN4Q3O = TYLDqN4Q3O +(814 - 813);
                }
            }
            for (x = (617 - 616); x <= n - (112 - 111); x = x + (873 - 872))
                sum += aaemvgd ();
            cout << sum << endl;
        }
    }
    return (562 - 562);
}

int aaemvgd () {
    int TYLDqN4Q3O;
    int x;
    int temp;
    {
        x = (920 - 920);
        while (x < size) {
            {
                TYLDqN4Q3O = (64 - 63);
                temp = (615 - 615);
                while (size > TYLDqN4Q3O) {
                    if (temp > id3N0hoE[x][TYLDqN4Q3O])
                        temp = id3N0hoE[x][TYLDqN4Q3O];
                    TYLDqN4Q3O = TYLDqN4Q3O +(32 - 31);
                }
            }
            for (TYLDqN4Q3O = (647 - 647); TYLDqN4Q3O < size; TYLDqN4Q3O = TYLDqN4Q3O +(922 - 921))
                id3N0hoE[x][TYLDqN4Q3O] -= temp;
            x = x + (801 - 800);
        }
    }
    for (TYLDqN4Q3O = (785 - 785); TYLDqN4Q3O < size; TYLDqN4Q3O = TYLDqN4Q3O +(457 - 456)) {
        for (x = (743 - 742), temp = id3N0hoE[(95 - 95)][TYLDqN4Q3O]; x < size; x = x + (919 - 918))
            if (temp > id3N0hoE[x][TYLDqN4Q3O])
                temp = id3N0hoE[x][TYLDqN4Q3O];
        {
            x = (415 - 415);
            while (x < size) {
                id3N0hoE[x][TYLDqN4Q3O] -= temp;
                x = x + (492 - 491);
            }
        }
    }
    temp = id3N0hoE[(694 - 693)][(150 - 149)];
    for (x = (949 - 948); x < size - (234 - 233); x = x + (854 - 853)) {
        TYLDqN4Q3O = (194 - 194);
        while (TYLDqN4Q3O < size) {
            id3N0hoE[x][TYLDqN4Q3O] = id3N0hoE[x + (905 - 904)][TYLDqN4Q3O];
            TYLDqN4Q3O = TYLDqN4Q3O +(876 - 875);
        }
    }
    for (TYLDqN4Q3O = (755 - 754); TYLDqN4Q3O < size - (391 - 390); TYLDqN4Q3O = TYLDqN4Q3O +(751 - 750))
        for (x = 0; x < size - 1; x = x + 1)
            id3N0hoE[x][TYLDqN4Q3O] = id3N0hoE[x][TYLDqN4Q3O +1];
    size -= 1;
    return temp;
}

