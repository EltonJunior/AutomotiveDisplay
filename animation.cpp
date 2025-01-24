#include "animation.h"

Animation::Animation(QObject *parent) : QObject(parent),
  m_RangeVar("442"),
  m_VelocityVar("0"),
  m_BatteryVar("92"),
  m_BatteryFillImgVar("127"),
  m_UpperLeds0Var(1),
  m_UpperLeds1Var(1),
  m_UpperLeds2Var(1),
  m_UpperLeds3Var(1),
  m_UpperLeds4Var(1),
  m_UpperLeds5Var(1),
  m_UpperLeds6Var(1),
  m_UpperLeds7Var(1),
  m_UpperLeds8Var(1),
  m_UpperLeds9Var(1),
  m_BatteryInfoVar("Charging"),
  m_DriverInfoVar("ReCar Concept by CES")
{
    timerAnimation = new QTimer(this);
    connect(timerAnimation, SIGNAL(timeout()),this,SLOT(TimerAnimationCounter()));
    timerAnimation->start(500);
}

void Animation::TimerAnimationCounter()
{
    setRangeVar( QString::number(arrayRange[countertimerAnimation]) );
    setVelocityVar( QString::number(arrayVelocity[countertimerAnimation]) );
    setBatteryVar( QString::number(arrayBattery[countertimerAnimation]) );
    setBatteryFillImgVar( QString::number(arrayBattery[countertimerAnimation] + 27) );
    ShowUpperLeds( arrayUpperLeds[countertimerAnimation] );
    setBatteryInfoVar( arrayBatteryInfo[countertimerAnimation] );
    setDriverInfoVar( arrayDriverInfo[countertimerAnimation] );

    if(countertimerAnimation++ >= 199)
        countertimerAnimation = 0;

}

QString Animation::RangeVar()
{
    return m_RangeVar;
}

void Animation::setRangeVar(QString newRangeVar )
{
    if( m_RangeVar != newRangeVar )
    {
        m_RangeVar = newRangeVar;
        emit RangeVarChanged();
    }
}

QString Animation::VelocityVar()
{
    return m_VelocityVar;
}

void Animation::setVelocityVar(QString newVelocityVar )
{
    if( m_VelocityVar != newVelocityVar )
    {
        m_VelocityVar = newVelocityVar;
        emit VelocityVarChanged();
    }
}

QString Animation::BatteryVar()
{
    return m_BatteryVar;
}

void Animation::setBatteryVar(QString newBatteryVar )
{
    if( m_BatteryVar != newBatteryVar )
    {
        m_BatteryVar = newBatteryVar;
        emit BatteryVarChanged();
    }
}

QString Animation::BatteryFillImgVar()
{
    return m_BatteryFillImgVar;
}

void Animation::setBatteryFillImgVar(QString newBatteryFillImgVar )
{
    if( m_BatteryFillImgVar != newBatteryFillImgVar )
    {
        m_BatteryFillImgVar = newBatteryFillImgVar;
        emit BatteryFillImgVarChanged();
    }
}

int Animation::UpperLeds0Var()
{
    return m_UpperLeds0Var;
}

void Animation::setUpperLeds0Var(int newUpperLeds0Var )
{
    if( m_UpperLeds0Var != newUpperLeds0Var )
    {
        m_UpperLeds0Var = newUpperLeds0Var;
        emit UpperLeds0VarChanged();
    }
}

int Animation::UpperLeds1Var()
{
    return m_UpperLeds1Var;
}

void Animation::setUpperLeds1Var(int newUpperLeds1Var )
{
    if( m_UpperLeds1Var != newUpperLeds1Var )
    {
        m_UpperLeds1Var = newUpperLeds1Var;
        emit UpperLeds1VarChanged();
    }
}

int Animation::UpperLeds2Var()
{
    return m_UpperLeds2Var;
}

void Animation::setUpperLeds2Var(int newUpperLeds2Var )
{
    if( m_UpperLeds2Var != newUpperLeds2Var )
    {
        m_UpperLeds2Var = newUpperLeds2Var;
        emit UpperLeds2VarChanged();
    }
}

int Animation::UpperLeds3Var()
{
    return m_UpperLeds3Var;
}

void Animation::setUpperLeds3Var(int newUpperLeds3Var )
{
    if( m_UpperLeds3Var != newUpperLeds3Var )
    {
        m_UpperLeds3Var = newUpperLeds3Var;
        emit UpperLeds3VarChanged();
    }
}

int Animation::UpperLeds4Var()
{
    return m_UpperLeds4Var;
}

void Animation::setUpperLeds4Var(int newUpperLeds4Var )
{
    if( m_UpperLeds4Var != newUpperLeds4Var )
    {
        m_UpperLeds4Var = newUpperLeds4Var;
        emit UpperLeds4VarChanged();
    }
}

int Animation::UpperLeds5Var()
{
    return m_UpperLeds5Var;
}

void Animation::setUpperLeds5Var(int newUpperLeds5Var )
{
    if( m_UpperLeds5Var != newUpperLeds5Var )
    {
        m_UpperLeds5Var = newUpperLeds5Var;
        emit UpperLeds5VarChanged();
    }
}

int Animation::UpperLeds6Var()
{
    return m_UpperLeds6Var;
}

void Animation::setUpperLeds6Var(int newUpperLeds6Var )
{
    if( m_UpperLeds6Var != newUpperLeds6Var )
    {
        m_UpperLeds6Var = newUpperLeds6Var;
        emit UpperLeds6VarChanged();
    }
}

int Animation::UpperLeds7Var()
{
    return m_UpperLeds7Var;
}

void Animation::setUpperLeds7Var(int newUpperLeds7Var )
{
    if( m_UpperLeds7Var != newUpperLeds7Var )
    {
        m_UpperLeds7Var = newUpperLeds7Var;
        emit UpperLeds7VarChanged();
    }
}

int Animation::UpperLeds8Var()
{
    return m_UpperLeds8Var;
}

void Animation::setUpperLeds8Var(int newUpperLeds8Var )
{
    if( m_UpperLeds8Var != newUpperLeds8Var )
    {
        m_UpperLeds8Var = newUpperLeds8Var;
        emit UpperLeds8VarChanged();
    }
}

int Animation::UpperLeds9Var()
{
    return m_UpperLeds9Var;
}

void Animation::setUpperLeds9Var(int newUpperLeds9Var )
{
    if( m_UpperLeds9Var != newUpperLeds9Var )
    {
        m_UpperLeds9Var = newUpperLeds9Var;
        emit UpperLeds9VarChanged();
    }
}

QString Animation::BatteryInfoVar()
{
    return m_BatteryInfoVar;
}

void Animation::setBatteryInfoVar(QString newBatteryInfoVar )
{
    if( m_BatteryInfoVar != newBatteryInfoVar )
    {
        m_BatteryInfoVar = newBatteryInfoVar;
        emit BatteryInfoVarChanged();
    }
}

QString Animation::DriverInfoVar()
{
    return m_DriverInfoVar;
}

void Animation::setDriverInfoVar(QString newDriverInfoVar )
{
    if( m_DriverInfoVar != newDriverInfoVar )
    {
        m_DriverInfoVar = newDriverInfoVar;
        emit DriverInfoVarChanged();
    }
}

void Animation::ShowUpperLeds( int upperLedsNumber )
{

    switch(upperLedsNumber)
    {
        case 0:
        setUpperLeds0Var( 0 );
        setUpperLeds1Var( 0 );
        setUpperLeds2Var( 0 );
        setUpperLeds3Var( 0 );
        setUpperLeds4Var( 0 );
        setUpperLeds5Var( 0 );
        setUpperLeds6Var( 0 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 1:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 0 );
        setUpperLeds2Var( 0 );
        setUpperLeds3Var( 0 );
        setUpperLeds4Var( 0 );
        setUpperLeds5Var( 0 );
        setUpperLeds6Var( 0 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 2:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 0 );
        setUpperLeds3Var( 0 );
        setUpperLeds4Var( 0 );
        setUpperLeds5Var( 0 );
        setUpperLeds6Var( 0 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 3:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 0 );
        setUpperLeds4Var( 0 );
        setUpperLeds5Var( 0 );
        setUpperLeds6Var( 0 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 4:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 1 );
        setUpperLeds4Var( 0 );
        setUpperLeds5Var( 0 );
        setUpperLeds6Var( 0 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 5:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 1 );
        setUpperLeds4Var( 1 );
        setUpperLeds5Var( 0 );
        setUpperLeds6Var( 0 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 6:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 1 );
        setUpperLeds4Var( 1 );
        setUpperLeds5Var( 1 );
        setUpperLeds6Var( 0 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 7:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 1 );
        setUpperLeds4Var( 1 );
        setUpperLeds5Var( 1 );
        setUpperLeds6Var( 1 );
        setUpperLeds7Var( 0 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 8:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 1 );
        setUpperLeds4Var( 1 );
        setUpperLeds5Var( 1 );
        setUpperLeds6Var( 1 );
        setUpperLeds7Var( 1 );
        setUpperLeds8Var( 0 );
        setUpperLeds9Var( 0 );
            break;
        case 9:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 1 );
        setUpperLeds4Var( 1 );
        setUpperLeds5Var( 1 );
        setUpperLeds6Var( 1 );
        setUpperLeds7Var( 1 );
        setUpperLeds8Var( 1 );
        setUpperLeds9Var( 0 );
            break;
        case 10:
        setUpperLeds0Var( 1 );
        setUpperLeds1Var( 1 );
        setUpperLeds2Var( 1 );
        setUpperLeds3Var( 1 );
        setUpperLeds4Var( 1 );
        setUpperLeds5Var( 1 );
        setUpperLeds6Var( 1 );
        setUpperLeds7Var( 1 );
        setUpperLeds8Var( 1 );
        setUpperLeds9Var( 1 );
            break;
        default:
            break;
    }

}
