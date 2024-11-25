int main () {
    int i, qJE6QuoDrA, JsjHWaniFXM;
    char j8uQ3y [(667 - 467)];
    int HX7hNf = strlen (j8uQ3y);
    char qeOCkw5;
    qeOCkw5 = j8uQ3y[(83 - 83)];
    scanf ("%s", j8uQ3y);
    {
        i = (242 - 242);
        while (i < HX7hNf) {
            if (j8uQ3y[i] != qeOCkw5 && j8uQ3y[i] != 0) {
                qJE6QuoDrA = i;
                while (qJE6QuoDrA >= 0) {
                    if (j8uQ3y[qJE6QuoDrA] != j8uQ3y[i] && ((i - qJE6QuoDrA - 1) % (296 - 294)) == 0 && j8uQ3y[qJE6QuoDrA] != 0) {
                        j8uQ3y[qJE6QuoDrA] = 0;
                        j8uQ3y[i] = 0;
                        printf ("%d %d\n", qJE6QuoDrA, i);
                        break;
                    }
                    qJE6QuoDrA--;
                }
            }
            i++;
        }
    }
}

