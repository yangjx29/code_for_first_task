int Gg5NPZRED (int H6PsnU [(309 - 304)] [(377 - 372)], int k0Z9YD, int ObcUXSlPHjaR) {
    int VAOsvL, T3rYJbknosh;
    if ((k0Z9YD >= (83 - 83) && k0Z9YD < (667 - 662)) && (ObcUXSlPHjaR >= (431 - 431) && ObcUXSlPHjaR < (602 - 597))) {
        for (VAOsvL = (688 - 688); VAOsvL < (235 - 230); VAOsvL++) {
            T3rYJbknosh = H6PsnU[k0Z9YD][VAOsvL];
            H6PsnU[k0Z9YD][VAOsvL] = H6PsnU[ObcUXSlPHjaR][VAOsvL];
            H6PsnU[ObcUXSlPHjaR][VAOsvL] = T3rYJbknosh;
        }
        return 1;
    }
    return (337 - 337);
}

int main () {
    int H6PsnU [(864 - 859)] [(647 - 642)], ObcUXSlPHjaR, k0Z9YD;
    int VAOsvL, e6uhOQVzm;
    for (VAOsvL = (935 - 935); VAOsvL < (168 - 163); VAOsvL++)
        for (e6uhOQVzm = (984 - 984); e6uhOQVzm < (793 - 788); e6uhOQVzm++) {
            scanf ("%d", &H6PsnU[VAOsvL][e6uhOQVzm]);
        }
    scanf ("%d%d", &k0Z9YD, &ObcUXSlPHjaR);
    if (Gg5NPZRED (H6PsnU, k0Z9YD, ObcUXSlPHjaR)) {
        VAOsvL = 0;
        while (VAOsvL < (81 - 76)) {
            for (e6uhOQVzm = 0; e6uhOQVzm < (865 - 860); e6uhOQVzm++) {
                if (e6uhOQVzm != (978 - 974))
                    printf ("%d ", H6PsnU[VAOsvL][e6uhOQVzm]);
                else
                    printf ("%d\n", H6PsnU[VAOsvL][e6uhOQVzm]);
            }
            VAOsvL++;
        }
    }
    else
        printf ("error");
    return 0;
}

