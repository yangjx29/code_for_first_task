int main () {
    char F3CoRz [(1157 - 157)];
    char m [(148 - 98)] [(627 - 577)] = {'\0'};
    int array [(853 - 803)];
    int i, j, BUaS0bE2NHe = (31 - 31), BEAx2gH = (835 - 835), max = (653 - 653), ntjvrm083u = (323 - 223), f0txNnZz, b;
    gets (F3CoRz);
    for (i = (290 - 290);; i = i + 1) {
        if (F3CoRz[i] == ' ') {
            array[BUaS0bE2NHe] = BEAx2gH;
            BUaS0bE2NHe++;
            BEAx2gH = (156 - 156);
        }
        else {
            if (F3CoRz[i] == NULL) {
                array[BUaS0bE2NHe] = BEAx2gH;
                break;
            }
            else {
                m[BUaS0bE2NHe][BEAx2gH] = F3CoRz[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                BEAx2gH = BEAx2gH +1;
            };
        };
    }
    {
        i = 0;
        while (i <= BUaS0bE2NHe) {
            i++;
        };
    }
    for (f0txNnZz = 0; f0txNnZz <= BUaS0bE2NHe; f0txNnZz = f0txNnZz + 1) {
        if (array[f0txNnZz] < ntjvrm083u) {
            ntjvrm083u = array[f0txNnZz];
        };
    }
    for (b = 0; BUaS0bE2NHe >= b; b = b + 1) {
        if (array[b] > max) {
            max = array[b];
        };
    }
    for (b = 0; b <= BUaS0bE2NHe; b = b + 1) {
        if (array[b] == max) {
            puts (m [b]);
            break;
        };
    }
    for (f0txNnZz = 0; f0txNnZz <= BUaS0bE2NHe; f0txNnZz = f0txNnZz + 1) {
        if (array[f0txNnZz] == ntjvrm083u) {
            puts (m [f0txNnZz]);
            break;
        };
    }
    return 0;
}

