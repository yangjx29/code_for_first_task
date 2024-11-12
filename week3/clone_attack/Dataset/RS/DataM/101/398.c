int main () {
    int A;
    int yCYdimBn3M;
    int uMXvN3izc;
    int MayWqKV;
    int P0RZIKxEJ;
    int nvy3cGIdYbq7;
    for (A = (696 - 695); (213 - 210) >= A; A++)
        for (yCYdimBn3M = (472 - 471); (762 - 759) >= yCYdimBn3M; yCYdimBn3M++) {
            if (!(yCYdimBn3M != A))
                continue;
            for (uMXvN3izc = 1; 3 >= uMXvN3izc; uMXvN3izc++) {
                if (!(uMXvN3izc != A) || !(uMXvN3izc != yCYdimBn3M))
                    continue;
                MayWqKV = (A < yCYdimBn3M) + (!(A != uMXvN3izc));
                P0RZIKxEJ = (yCYdimBn3M < A) + (uMXvN3izc < A);
                nvy3cGIdYbq7 = (yCYdimBn3M < uMXvN3izc) + (A < yCYdimBn3M);
                if (MayWqKV > P0RZIKxEJ &&P0RZIKxEJ > nvy3cGIdYbq7 && A < yCYdimBn3M && yCYdimBn3M < uMXvN3izc) {
                    cout << "ABC";
                    break;
                }
                if (MayWqKV > nvy3cGIdYbq7 && nvy3cGIdYbq7 > P0RZIKxEJ &&A < uMXvN3izc && uMXvN3izc < yCYdimBn3M) {
                    cout << "ACB";
                    break;
                }
                if (P0RZIKxEJ > MayWqKV &&MayWqKV > nvy3cGIdYbq7 && yCYdimBn3M < A &&A < uMXvN3izc) {
                    cout << "BAC";
                    break;
                }
                if (P0RZIKxEJ > nvy3cGIdYbq7 && nvy3cGIdYbq7 > MayWqKV &&yCYdimBn3M < uMXvN3izc && uMXvN3izc < A) {
                    cout << "BCA";
                    break;
                }
                if (nvy3cGIdYbq7 > MayWqKV &&MayWqKV > P0RZIKxEJ &&uMXvN3izc < A &&A < yCYdimBn3M) {
                    cout << "CAB";
                    break;
                }
                if (nvy3cGIdYbq7 > P0RZIKxEJ &&P0RZIKxEJ > MayWqKV &&uMXvN3izc < yCYdimBn3M && yCYdimBn3M < A) {
                    cout << "CBA";
                    break;
                };
            };
        }
    return (922 - 922);
}

