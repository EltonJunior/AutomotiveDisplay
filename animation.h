#ifndef ANIMATION_H
#define ANIMATION_H

#include <QObject>
#include <QtCore>

class Animation : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString RangeVar READ RangeVar WRITE setRangeVar NOTIFY RangeVarChanged)
    Q_PROPERTY(QString VelocityVar READ VelocityVar WRITE setVelocityVar NOTIFY VelocityVarChanged)
    Q_PROPERTY(QString BatteryVar READ BatteryVar WRITE setBatteryVar NOTIFY BatteryVarChanged)
    Q_PROPERTY(QString BatteryFillImgVar READ BatteryFillImgVar WRITE setBatteryFillImgVar NOTIFY BatteryFillImgVarChanged)
    Q_PROPERTY(int UpperLeds0Var READ UpperLeds0Var WRITE setUpperLeds0Var NOTIFY UpperLeds0VarChanged)
    Q_PROPERTY(int UpperLeds1Var READ UpperLeds1Var WRITE setUpperLeds1Var NOTIFY UpperLeds1VarChanged)
    Q_PROPERTY(int UpperLeds2Var READ UpperLeds2Var WRITE setUpperLeds2Var NOTIFY UpperLeds2VarChanged)
    Q_PROPERTY(int UpperLeds3Var READ UpperLeds3Var WRITE setUpperLeds3Var NOTIFY UpperLeds3VarChanged)
    Q_PROPERTY(int UpperLeds4Var READ UpperLeds4Var WRITE setUpperLeds4Var NOTIFY UpperLeds4VarChanged)
    Q_PROPERTY(int UpperLeds5Var READ UpperLeds5Var WRITE setUpperLeds5Var NOTIFY UpperLeds5VarChanged)
    Q_PROPERTY(int UpperLeds6Var READ UpperLeds6Var WRITE setUpperLeds6Var NOTIFY UpperLeds6VarChanged)
    Q_PROPERTY(int UpperLeds7Var READ UpperLeds7Var WRITE setUpperLeds7Var NOTIFY UpperLeds7VarChanged)
    Q_PROPERTY(int UpperLeds8Var READ UpperLeds8Var WRITE setUpperLeds8Var NOTIFY UpperLeds8VarChanged)
    Q_PROPERTY(int UpperLeds9Var READ UpperLeds9Var WRITE setUpperLeds9Var NOTIFY UpperLeds9VarChanged)
    Q_PROPERTY(QString BatteryInfoVar READ BatteryInfoVar WRITE setBatteryInfoVar NOTIFY BatteryInfoVarChanged)
    Q_PROPERTY(QString DriverInfoVar READ DriverInfoVar WRITE setDriverInfoVar NOTIFY DriverInfoVarChanged)
public:
    explicit Animation(QObject *parent = nullptr);
    QString RangeVar();
    QString VelocityVar();
    QString BatteryVar();
    QString BatteryFillImgVar();
    int UpperLeds0Var();
    int UpperLeds1Var();
    int UpperLeds2Var();
    int UpperLeds3Var();
    int UpperLeds4Var();
    int UpperLeds5Var();
    int UpperLeds6Var();
    int UpperLeds7Var();
    int UpperLeds8Var();
    int UpperLeds9Var();
    QString BatteryInfoVar();
    QString DriverInfoVar();

    QTimer *timerAnimation;
    int countertimerAnimation = 0;

    int arrayRange[200] = {442,442,442,442,442,444,444,444,444,444,446,446,446,446,446,448,448,448,448,448,449,449,449,449,449,450,450,450,450,450,450,450,450,450,450,450,450,450,450,100,113,126,139,152,165,178,191,204,217,230,243,256,269,282,295,308,321,334,347,360,373,386,399,412,425,438,450,450,450,450,450,450,449,449,449,448,448,447,446,445,444,443,442,441,440,439,438,437,436,435,434,433,432,431,430,429,428,418,408,398,388,378,368,358,348,338,328,318,308,298,288,278,268,258,248,238,228,218,222,226,230,234,238,242,246,250,254,258,262,266,270,274,278,282,286,286,286,286,286,286,284,282,280,278,276,272,268,264,260,256,252,248,238,228,218,208,198,188,178,168,167,166,165,164,163,162,161,160,159,158,157,156,155,154,153,152,151,150,149,148,147,146,145,144,143,142,141,140,139,138,137,136,135,134,133,170,207,244,281,318};
    int arrayVelocity[200] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,60,60,60,60,60,60,60,60,60,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,130,132,134,136,138,140,145,140,135,130,125,120,115,110,105,100,95,90,85,80,75,70,65,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,36,32,28,24,20,18,16,14,12,10,8,6,4,2,0,0,0,0,0,0};
    int arrayBattery[200] = {92,92,92,92,92,94,94,94,94,94,96,96,96,96,96,98,98,98,98,98,99,99,99,99,99,100,100,100,100,100,100,100,100,100,100,100,100,100,100,99,99,99,99,99,99,99,99,99,99,99,99,99,99,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,98,97,97,97,96,96,96,95,95,95,94,94,94,93,93,93,92,92,91,91,90,88,86,84,82,80,78,76,74,72,70,68,66,64,62,60,58,56,54,52,50,48,49,49,49,50,50,50,51,51,51,52,52,52,53,53,53,54,54,54,54,54,54,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,34,34,34,34,33,33,33,33,32,32,32,31,31,31,30,30,30,29,29,29,28,28,27,27,26,26,25,25,24,24,23,23,22,22,20,30,40,50,60,70};
    int arrayUpperLeds[200] = {2,4,6,8,10,2,4,6,8,10,2,4,6,8,10,2,4,6,8,10,2,4,6,8,10,2,4,6,8,10,10,10,10,10,10,10,10,10,10,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,8,8,8,8,10,10,10,10,10,10,10,9,9,9,9,9,9,9,8,8,8,8,8,8,8,7,7,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,6,6,6,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,6,7,8,9,2,4,6,8,10};
    int arrayIndicators[200] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1};
    QString arrayBatteryInfo[200] = {"Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Charging","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Regenerative","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Normal Mode","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Discharging fast","Charging","Charging","Charging","Charging","Charging"};
    QString arrayDriverInfo[200] = {"ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","Driver Information Center","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","Airbag Light ON","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","Cruise Control Light ON","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","Traction Light ON","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ABS Light ON","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","EPS Ligth ON","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","ReCar Concept by CES","All Light OFF","All Light OFF","All Light OFF","All Light OFF","All Light OFF","All Light OFF","All Light OFF","All Light OFF","All Light OFF","All Light OFF"};

signals:
    void RangeVarChanged();
    void VelocityVarChanged();
    void BatteryVarChanged();
    void BatteryFillImgVarChanged();
    void UpperLeds0VarChanged();
    void UpperLeds1VarChanged();
    void UpperLeds2VarChanged();
    void UpperLeds3VarChanged();
    void UpperLeds4VarChanged();
    void UpperLeds5VarChanged();
    void UpperLeds6VarChanged();
    void UpperLeds7VarChanged();
    void UpperLeds8VarChanged();
    void UpperLeds9VarChanged();
    void BatteryInfoVarChanged();
    void DriverInfoVarChanged();


public slots:
    void setRangeVar( QString );
    void setVelocityVar( QString );
    void setBatteryVar( QString );
    void setBatteryFillImgVar( QString );
    void setUpperLeds0Var( int );
    void setUpperLeds1Var( int );
    void setUpperLeds2Var( int );
    void setUpperLeds3Var( int );
    void setUpperLeds4Var( int );
    void setUpperLeds5Var( int );
    void setUpperLeds6Var( int );
    void setUpperLeds7Var( int );
    void setUpperLeds8Var( int );
    void setUpperLeds9Var( int );
    void setBatteryInfoVar( QString );
    void setDriverInfoVar( QString );
    void TimerAnimationCounter();
    void ShowUpperLeds( int );

private:
    QString m_RangeVar;
    QString m_VelocityVar;
    QString m_BatteryVar;
    QString m_BatteryFillImgVar;
    int m_UpperLeds0Var;
    int m_UpperLeds1Var;
    int m_UpperLeds2Var;
    int m_UpperLeds3Var;
    int m_UpperLeds4Var;
    int m_UpperLeds5Var;
    int m_UpperLeds6Var;
    int m_UpperLeds7Var;
    int m_UpperLeds8Var;
    int m_UpperLeds9Var;
    QString m_BatteryInfoVar;
    QString m_DriverInfoVar;

};

#endif // ANIMATION_H
