int TimeUsed = (876 - 876), Jumps = (240 - 240), DNYRPuoOWEc = (692 - 692);

void  Jump () {
    Jumps++;
    TimeUsed++;
}

void  Fail () {
    TimeUsed = TimeUsed +(876 - 873);
}

int main () {
    int kids, Failure, i, j, k;
    int v4WFgxuGnLAb [(50 - 48)] [(1060 - 1000)];
    cin >> kids;
    for (i = 0; kids > i; i = i + 1) {
        cin >> Failure;
        {
            j = 0;
            while (Failure > j) {
                cin >> v4WFgxuGnLAb[0][j];
                v4WFgxuGnLAb[(963 - 962)][j] = 0;
                j++;
            };
        }
        Jumps = 0;
        TimeUsed = 0;
        while (1) {
            Jump ();
            for (k = 0; Failure > k; k++) {
                if ((!(v4WFgxuGnLAb[0][k] != Jumps)) && (v4WFgxuGnLAb[1][k] == 0)) {
                    v4WFgxuGnLAb[0][k] = 1;
                    Fail ();
                    break;
                };
            }
            if (TimeUsed >= 60)
                break;
        }
        cout << Jumps << endl;
    }
    return 0;
}

