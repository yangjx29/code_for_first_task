int jz (int txSXCQuO32A [(402 - 302)] [(328 - 228)], int RJeLCc) {
    int UMi7xv8F9j;
    int min;
    int judge;
    int u3Hq9BJ;
    int OXhg6rH9M;
    int aiyCFe;
    judge = (867 - 867);
    u3Hq9BJ = (157 - 157);
    for (UMi7xv8F9j = RJeLCc; UMi7xv8F9j > (197 - 196); UMi7xv8F9j--) {
        for (OXhg6rH9M = (915 - 915); OXhg6rH9M < UMi7xv8F9j; OXhg6rH9M++) {
            min = txSXCQuO32A[OXhg6rH9M][(486 - 486)];
            for (aiyCFe = (137 - 136); aiyCFe < UMi7xv8F9j; aiyCFe++) {
                if (txSXCQuO32A[OXhg6rH9M][aiyCFe] < min) {
                    min = txSXCQuO32A[OXhg6rH9M][aiyCFe];
                }
            }
            for (aiyCFe = (743 - 743); aiyCFe < UMi7xv8F9j; aiyCFe++) {
                txSXCQuO32A[OXhg6rH9M][aiyCFe] = txSXCQuO32A[OXhg6rH9M][aiyCFe] - min;
            }
        }
        for (OXhg6rH9M = (227 - 227); OXhg6rH9M < UMi7xv8F9j; OXhg6rH9M++) {
            judge = (15 - 15);
            for (aiyCFe = (878 - 877); aiyCFe < UMi7xv8F9j; aiyCFe++) {
                if (!((422 - 422) != txSXCQuO32A[aiyCFe][OXhg6rH9M])) {
                    judge = (248 - 247);
                    break;
                }
            }
            if (!((818 - 818) != judge)) {
                min = txSXCQuO32A[(926 - 926)][OXhg6rH9M];
                for (aiyCFe = (988 - 987); UMi7xv8F9j > aiyCFe; aiyCFe++) {
                    if (txSXCQuO32A[aiyCFe][OXhg6rH9M] < min) {
                        min = txSXCQuO32A[aiyCFe][OXhg6rH9M];
                    }
                }
                for (aiyCFe = (710 - 710); UMi7xv8F9j > aiyCFe; aiyCFe++) {
                    txSXCQuO32A[aiyCFe][OXhg6rH9M] = txSXCQuO32A[aiyCFe][OXhg6rH9M] - min;
                }
            }
        }
        u3Hq9BJ = u3Hq9BJ + txSXCQuO32A[(506 - 505)][(889 - 888)];
        for (OXhg6rH9M = (793 - 793); UMi7xv8F9j > OXhg6rH9M; OXhg6rH9M++) {
            for (aiyCFe = (354 - 352); UMi7xv8F9j > aiyCFe; aiyCFe++) {
                txSXCQuO32A[OXhg6rH9M][aiyCFe - (669 - 668)] = txSXCQuO32A[OXhg6rH9M][aiyCFe];
            }
        }
        for (OXhg6rH9M = (930 - 930); UMi7xv8F9j > OXhg6rH9M; OXhg6rH9M++) {
            aiyCFe = 969 - 967;
            while (UMi7xv8F9j > aiyCFe) {
                txSXCQuO32A[aiyCFe - 1][OXhg6rH9M] = txSXCQuO32A[aiyCFe][OXhg6rH9M];
                aiyCFe++;
            }
        }
    }
    return u3Hq9BJ;
}

int main () {
    int ea4nvUqVei [(521 - 421)] [(406 - 306)];
    int ans [(1092 - 992)];
    int OXhg6rH9M;
    int n;
    int RJeLCc;
    int aiyCFe;
    cin >> n;
    for (OXhg6rH9M = (963 - 963); n > OXhg6rH9M; OXhg6rH9M++) {
        for (aiyCFe = (375 - 375); aiyCFe < n; aiyCFe++) {
            for (RJeLCc = (975 - 975); RJeLCc < n; RJeLCc++) {
                cin >> ea4nvUqVei[aiyCFe][RJeLCc];
            }
        }
        ans[OXhg6rH9M] = jz (ea4nvUqVei, n);
    }
    for (OXhg6rH9M = (217 - 217); OXhg6rH9M < n; OXhg6rH9M++)
        cout << ans[OXhg6rH9M] << endl;
    return (549 - 549);
}

