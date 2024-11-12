int qUufJx = (684 - 684), X3jXPwSIRT = 0, kc3s9LWJv2 = 0, DsTuvr89KR [100], ncwzMS4b [100], yhNwX7ty [(648 - 448)];
void  VVRA6ucev ();
void  l0dvjc ();
void  tNj3Xubfkd (int nSV6OQ [100]);
void  CnNTgoRVsE (int DsTuvr89KR [100], int ncwzMS4b [100]);
void  KEyDte7q (int yhNwX7ty [200]);

int main () {
    VVRA6ucev ();
    l0dvjc ();
    CnNTgoRVsE (DsTuvr89KR, ncwzMS4b);
    KEyDte7q (yhNwX7ty);
    return 0;
}

void  VVRA6ucev () {
    cin >> qUufJx >> X3jXPwSIRT;
    {
        int MLTfyPrV;
        MLTfyPrV = 0;
        for (; MLTfyPrV < qUufJx;) {
            cin >> DsTuvr89KR[MLTfyPrV];
            MLTfyPrV++;
        }
    }
    {
        int MLTfyPrV;
        MLTfyPrV = 0;
        for (; MLTfyPrV < X3jXPwSIRT;) {
            cin >> ncwzMS4b[MLTfyPrV];
            MLTfyPrV++;
        }
    }
}

void  l0dvjc () {
    kc3s9LWJv2 = qUufJx;
    tNj3Xubfkd (DsTuvr89KR);
    kc3s9LWJv2 = X3jXPwSIRT;
    tNj3Xubfkd (ncwzMS4b);
}

void  tNj3Xubfkd (int nSV6OQ [100]) {
    int VTnwao54lLhZ;
    VTnwao54lLhZ = 0;
    {
        int MLTfyPrV;
        MLTfyPrV = (66 - 65);
        for (; MLTfyPrV < kc3s9LWJv2;) {
            {
                int XUer4VDE;
                XUer4VDE = 1;
                for (; kc3s9LWJv2 - MLTfyPrV >= XUer4VDE;) {
                    if (nSV6OQ[XUer4VDE -1] > nSV6OQ[XUer4VDE]) {
                        VTnwao54lLhZ = nSV6OQ[XUer4VDE];
                        nSV6OQ[XUer4VDE] = nSV6OQ[XUer4VDE -1];
                        nSV6OQ[XUer4VDE -1] = VTnwao54lLhZ;
                    }
                    XUer4VDE++;
                }
            }
            MLTfyPrV++;
        }
    }
}

void  CnNTgoRVsE (int DsTuvr89KR [100], int ncwzMS4b [100]) {
    memcpy (yhNwX7ty, DsTuvr89KR, qUufJx * 4);
    memcpy (yhNwX7ty + qUufJx, ncwzMS4b, X3jXPwSIRT *4);
}

void  KEyDte7q (int yhNwX7ty [200]) {
    cout << yhNwX7ty[0];
    for (int MLTfyPrV = 1;
    MLTfyPrV < qUufJx + X3jXPwSIRT; MLTfyPrV++)
        cout << " " << yhNwX7ty[MLTfyPrV];
}

