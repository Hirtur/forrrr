#pragma once

#include <iostream>
#include <string>


class Ihlutir {
    private:
        std::string litur;
        int ohma;
        float rymd;
        int numer;
        int staerd;
        int fjoldi;

    public:
        Ihlutir();
        Ihlutir(std::strirng litur,int ohma, float rymd, int numer, int staerd);
        std::string getLitur();
        void setLitur(string litur);
        int getOhma();
        void setOhma(int ohma);
        float getRymd();
        void setRymd(float rymd),
        int getNumer();
        void setNumer(int numer);
        int getStaerd();
        void setStaerd(int staerd);
        int getFjoldi();
        void setFjoldi(int fjoldi);































        

}