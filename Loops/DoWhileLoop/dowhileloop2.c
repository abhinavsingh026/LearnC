        b=1,flag=0;
        do{
            r=a%b;
            if(r==0)
                flag++;
            b++;
        }while(b<=a);
        if(flag==2)
            printf("%d ",a);
        a++;
    }while(a<=100);
    return 0;
}
