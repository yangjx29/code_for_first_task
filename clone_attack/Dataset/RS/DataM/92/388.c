main () {
    int ESuqgKR;
    int k;
    int wdrRkOV7j;
    int JSWOAKsDHcJP;
    int win;
    int PMRzN530gl;
    int n;
    int i;
    int j;
    int kLVW6T1FbgB;
    int OFJ90hLRye;
    int pGLR7Dd8cp [(1582 - 582)];
    int t [1000];
    int u8zY0wUGq [(936 - 836)];
    int temp;
    ESuqgKR = (964 - 964);
    k = (894 - 894);
    wdrRkOV7j = (337 - 337);
    JSWOAKsDHcJP = (756 - 756);
    win = (619 - 619);
    PMRzN530gl = (118 - 118);
    scanf ("%d", &n);
    for (; n != (693 - 693);) {
        kLVW6T1FbgB = OFJ90hLRye = n - (311 - 310);
        for (i = 0; n > i; i = i + 1)
            scanf ("%d", &pGLR7Dd8cp[i]);
        wdrRkOV7j = JSWOAKsDHcJP = (556 - 556);
        win = (477 - 477);
        PMRzN530gl = 0;
        {
            i = 0;
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
            while (n > i) {
                scanf ("%d", &t[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n > i) {
                {
                    j = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (j < n - (483 - 482)) {
                        if (pGLR7Dd8cp[j + (184 - 183)] > pGLR7Dd8cp[j]) {
                            temp = pGLR7Dd8cp[j + 1];
                            pGLR7Dd8cp[j + 1] = pGLR7Dd8cp[j];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            pGLR7Dd8cp[j] = temp;
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
                        j = j + 1;
                    };
                }
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
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                {
                    j = 0;
                    while (n - 1 > j) {
                        if (t[j] < t[j + 1]) {
                            temp = t[j + 1];
                            t[j + 1] = t[j];
                            t[j] = temp;
                        }
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                if (t[wdrRkOV7j] >= pGLR7Dd8cp[JSWOAKsDHcJP]) {
                    if (t[kLVW6T1FbgB] >= pGLR7Dd8cp[OFJ90hLRye]) {
                        if (t[wdrRkOV7j] > pGLR7Dd8cp[OFJ90hLRye])
                            PMRzN530gl = PMRzN530gl +1;
                        else if (t[wdrRkOV7j] == pGLR7Dd8cp[OFJ90hLRye])
                            ;
                        else if (t[wdrRkOV7j] < pGLR7Dd8cp[OFJ90hLRye])
                            win = win + 1;
                        wdrRkOV7j++;
                        OFJ90hLRye = OFJ90hLRye -1;
                    }
                    else if (t[kLVW6T1FbgB] < pGLR7Dd8cp[OFJ90hLRye]) {
                        win = win + 1;
                        kLVW6T1FbgB--;
                        OFJ90hLRye = OFJ90hLRye -1;
                    };
                }
                else {
                    if (t[wdrRkOV7j] < pGLR7Dd8cp[JSWOAKsDHcJP]) {
                        win++;
                        JSWOAKsDHcJP++;
                        wdrRkOV7j++;
                    };
                }
                i++;
            };
        }
        scanf ("%d", &n);
        u8zY0wUGq[ESuqgKR++] = 200 * (win - PMRzN530gl);
    }
    for (i = 0; i < ESuqgKR; i++) {
        printf ("%d\n", u8zY0wUGq[i]);
    }
    return 0;
}

