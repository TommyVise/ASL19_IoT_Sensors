
## ASL FabLab Castelfranco Veneto

Abbiamo utilizzato :   **Scheda RaspberryPi**

                                      **Arduino 1**  con :

-  sensore DHT22 ( temperatura, umidità )
-  sensore Luminosità
-  sensore RFID

                                      **Wemos D1 Mini** con:

- sensore DHT22 ( temperatura, umidità )





**RaspberryPi**  Il Raspberry Pi è un [single-board computer](https://it.wikipedia.org/wiki/Single-board_computer) sviluppato nel [Regno Unito](https://it.wikipedia.org/wiki/Regno_Unito) dalla [Raspberry Pi Foundation](https://it.wikipedia.org/wiki/Raspberry_Pi_Foundation). La scheda è stata progettata per ospitare sistemi operativi basati sul [kernel](https://it.wikipedia.org/wiki/Kernel) [Linux](https://it.wikipedia.org/wiki/Linux_(kernel)) o [RISC OS](https://it.wikipedia.org/wiki/RISC_OS)
![1](/IMAGE/1.jpg)





**Arduino** Arduino è una [piattaforma](https://it.wikipedia.org/wiki/Piattaforma_(informatica)) [hardware](https://it.wikipedia.org/wiki/Hardware) composta da una serie di [schede elettroniche](https://it.wikipedia.org/wiki/Scheda_elettronica) dotate di un [microcontrollore](https://it.wikipedia.org/wiki/Microcontrollore). Con Arduino si possono realizzare in maniera relativamente rapida e semplice piccoli [dispositivi](https://it.wikipedia.org/wiki/Dispositivo_(informatica)) come controllori di luci, di velocità per motori, sensori di luce, automatismi per il controllo della temperatura e dell&#39;umidità e molti altri progetti che utilizzano [sensori](https://it.wikipedia.org/wiki/Sensori), [attuatori](https://it.wikipedia.org/wiki/Attuatori) e comunicazione con altri dispositivi.
![2](/IMAGE/2.jpg)


**Sensore dht22**  Rileva Umidità(%) e Temperatura(C)
![3](/IMAGE/3.jpg)
                                                           
**Sensore Luminosità**  Rileva Umidità(%) e Temperatura(C)
![4](/IMAGE/4.jpg)



**Scheda RFID**    Lettore Schede magnetiche





![5](/IMAGE/5.jpg)



**Wemos D1 MINI** Il Modulo [WeMos D1 mini ](https://www.adrirobot.it/wemos_d1_mini/wemos_d1_mini.htm)è basato sul microcontrollore Wi-Fi ESP8266 ESP-12F che può essere programmato utilizzando l&#39;IDE di Arduino oppure NodeMCU. La semplicità della programmazione che può essere effettuata anche in modalità wireless e l&#39;ampia disponibilità di shield aggiuntivi permettono di sviluppare il proprio progetto di &quot;Internet delle cose&quot; in tempi estremamente rapidi.
![6](/IMAGE/6.jpg)






**SOFTWARE:**



**-Node-RED** è un software open source per programmare online contemporaneamente ad altre persone sullo stesso hardware creando dei &quot;flow&quot; a blocchi sfruttando principalmente Javascript, MQTT e JSON.

**-Emoncms.org** è una piattaforma online  per chiunque sia interessato alla programmazione ma soprattutto per l&#39;elaborazione e visualizzazione tramite dashboard e grafici di dati in input come energia, luminosità, temperatura ed in generale dati ambientali.

![7](/IMAGE/7.png)
![8](/IMAGE/8.png)

Per salvare ed elaborare i dati provenienti da alcuni sensori abbiamo usufruito di EMONCMS che, in primo luogo, ci ha permesso di salvare i dati in un server gratuito e di poterli rivedere tramite la sezione &quot;inputs&quot;; in secondo luogo di creare delle &quot;dashboards&quot;, ovvero delle schermate che ti permettono di monitorare in tempo reale l&#39;andamento dei report.


# Dati in arrivo dal sensore

![9](/IMAGE/9.png)
Tramite il &quot;flow&quot; in sovraimpressione, prima rivisto e spiegato, arrivano i dati al sensore nel database, qui vengono gestiti e raggruppati in sezioni. Nel nostro caso abbiamo diviso i dati in input in:

-Luminosità

-Temperatura

-Umidità

I dati, qualora il sensore fosse sempre attivo, vengono cambiati in tempo reale e sono visibili nella sezione &quot;inputs&quot; di Emoncms.



Avendo utilizzato 2 sensori, come si può vedere, abbiamo le 3 sezioni per entrambi i sensori, con differenti valori.

#

# 2) Feeds
![10](/IMAGE/10.png)
Le &quot;feeds&quot; gestiscono la memorizzazione dei dati degli input e si occupano di passarli al modulo successivo. Sempre all&#39;interno di questo modulo si può visualizza l&#39;attività di invio dei dati

#  3) Dashboards e visualizzazione finale dei dati
![11](/IMAGE/11.png)
#

Come potete vedere dall&#39;immagine soprastante, tramite l&#39;utilizzo delle dashboards si è potuti ad arrivare ad un risultato grafico dei dati arrivati in input. Queste dashboards però non sono esportabili, e sono visibili soltanto nel caso in cui si è nella stessa wifi della raspberry e si ha l&#39;account ad emoncms relativo.

Anche in questo caso i dati cambiano in tempo reale a sensore attivo.
