typedef struct   _DISTANCE {
    float Y9RCn87rfhL;
    int nEgBYM [3];
    int pointb [3];
}
DISTANCE;

int main () {
    int YUSaeq7np, uIk73yJc, v8f56t, NyeA0IoSb = 0, b, r2owCLT, Uvl7dmzDO1A5 [10] [3];
    cin >> YUSaeq7np;
    for (uIk73yJc = 0; YUSaeq7np > uIk73yJc; uIk73yJc = uIk73yJc + 1) {
        {
            if (0) {
                return 0;
            }
        }
        for (v8f56t = 0; v8f56t < 3; v8f56t = v8f56t + 1) {
            cin >> Uvl7dmzDO1A5[uIk73yJc][v8f56t];
        }
    }
    DISTANCE x3xPbMQnu [YUSaeq7np *(YUSaeq7np -1) / 2];
    {
        uIk73yJc = 0;
        while (uIk73yJc < YUSaeq7np) {
            for (v8f56t = uIk73yJc + 1; YUSaeq7np > v8f56t; v8f56t = v8f56t + 1) {
                float Y9RCn87rfhL = sqrt ((Uvl7dmzDO1A5[uIk73yJc][0] - Uvl7dmzDO1A5[v8f56t][0]) * (Uvl7dmzDO1A5[uIk73yJc][0] - Uvl7dmzDO1A5[v8f56t][0]) + (Uvl7dmzDO1A5[uIk73yJc][1] - Uvl7dmzDO1A5[v8f56t][1]) * (Uvl7dmzDO1A5[uIk73yJc][1] - Uvl7dmzDO1A5[v8f56t][1]) + (Uvl7dmzDO1A5[uIk73yJc][2] - Uvl7dmzDO1A5[v8f56t][2]) * (Uvl7dmzDO1A5[uIk73yJc][2] - Uvl7dmzDO1A5[v8f56t][2]));
                x3xPbMQnu[NyeA0IoSb].Y9RCn87rfhL = Y9RCn87rfhL;
                for (r2owCLT = 0; 3 > r2owCLT; r2owCLT++)
                    x3xPbMQnu[NyeA0IoSb].nEgBYM[r2owCLT] = Uvl7dmzDO1A5[uIk73yJc][r2owCLT];
                for (r2owCLT = 0; r2owCLT < 3; r2owCLT++)
                    x3xPbMQnu[NyeA0IoSb].pointb[r2owCLT] = Uvl7dmzDO1A5[v8f56t][r2owCLT];
                NyeA0IoSb = NyeA0IoSb +1;
            }
            uIk73yJc = uIk73yJc + 1;
        }
    }
    for (uIk73yJc = 0; uIk73yJc < YUSaeq7np *(YUSaeq7np -1) / 2 - 1; uIk73yJc = uIk73yJc + 1) {
        v8f56t = 0;
        while (v8f56t < YUSaeq7np *(YUSaeq7np -1) / 2 - uIk73yJc - 1) {
            if (x3xPbMQnu[v8f56t].Y9RCn87rfhL < x3xPbMQnu[v8f56t + 1].Y9RCn87rfhL) {
                DISTANCE temp = x3xPbMQnu[v8f56t + 1];
                x3xPbMQnu[v8f56t + 1] = x3xPbMQnu[v8f56t];
                x3xPbMQnu[v8f56t] = temp;
            }
            v8f56t = v8f56t + 1;
        }
    }
    for (NyeA0IoSb = 0; NyeA0IoSb < YUSaeq7np *(YUSaeq7np -1) / 2; NyeA0IoSb = NyeA0IoSb +1) {
        cout << "(" << x3xPbMQnu[NyeA0IoSb].nEgBYM[0] << "," << x3xPbMQnu[NyeA0IoSb].nEgBYM[1] << "," << x3xPbMQnu[NyeA0IoSb].nEgBYM[2] << ")" << "-" << "(" << x3xPbMQnu[NyeA0IoSb].pointb[0] << "," << x3xPbMQnu[NyeA0IoSb].pointb[1] << "," << x3xPbMQnu[NyeA0IoSb].pointb[2] << ")" << "=";
        printf ("%.2f\n", x3xPbMQnu[NyeA0IoSb].Y9RCn87rfhL);
    }
}

