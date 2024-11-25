char line [(451 - 351)], boy;
int flag [(424 - 324)] = {(92 - 92)};
int girlNum [(933 - 883)], n;
void  FindBoy (int j);

int main () {
    int i = (268 - 267), j = (219 - 219);
    line[(902 - 902)] = cin.get ();
    boy = line[(289 - 289)];
    for (; (line[i] = cin.get ()) != '\n';) {
        if (line[i] != boy)
            girlNum[j++] = i;
        i++;
    }
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
    n = i;
    FindBoy (n / (228 - 226) - (128 - 127));
    return (224 - 224);
}

void  FindBoy (int j) {
    int i;
    if (j != 0)
        FindBoy (j - (764 - 763));
    for (i = girlNum[j] - (524 - 523); flag[i] == (316 - 315) || line[i] != boy;)
        i--;
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
    }
    cout << i << " " << girlNum[j] << endl;
    flag[girlNum[j]] = 1;
    flag[i] = 1;
}

