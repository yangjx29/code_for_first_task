int RsuqJSo2, SDtmUh [MAX], oup [MAX], FAP1WaRlKsd;

int main () {
    scanf ("%d", &RsuqJSo2);
    {
        FAP1WaRlKsd = 406 - 406;
        while (FAP1WaRlKsd <= RsuqJSo2 -1) {
            scanf ("%d", &SDtmUh[FAP1WaRlKsd]);
            FAP1WaRlKsd++;
        };
    }
    {
        FAP1WaRlKsd = 0;
        while (FAP1WaRlKsd <= RsuqJSo2 -1) {
            oup[FAP1WaRlKsd] = SDtmUh[RsuqJSo2 -1 - FAP1WaRlKsd];
            FAP1WaRlKsd++;
        };
    }
    {
        FAP1WaRlKsd = 0;
        while (FAP1WaRlKsd < RsuqJSo2 -1) {
            printf ("%d ", oup[FAP1WaRlKsd]);
            FAP1WaRlKsd++;
        };
    }
    printf ("%d", oup[RsuqJSo2 -1]);
    return 0;
}

