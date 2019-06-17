
## ASL FabLab Castelfranco Veneto

Abbiamo utilizzato :   
  
  
  **Scheda RaspberryPi**
  
  
  **Scheda Arduino 1 con:**                      

-  sensore DHT22 ( temperatura, umidità )
-  sensore Luminosità
-  sensore RFID

  **Wemos d1 mini con:**                                   

- sensore DHT22 ( temperatura, umidità )




**RaspberryPi** = Il Raspberry Pi è un single-board computer sviluppato nel Regno Unito dalla Raspberry Pi Foundation. La scheda è stata progettata per ospitare sistemi operativi basati sul kernel Linux  o RISC OS
![1](/IMAGE/1.jpg)





**Arduino** =Arduino è una piattaforma hardware composta da una serie di schede elettroniche dotate di un microcontrollore. Con Arduino si possono realizzare in maniera relativamente rapida e semplice piccoli dispositivi come controllori di luci, di velocità per motori, sensori di luce, automatismi per il controllo della temperatura e dell&#39;umidità e molti altri progetti che utilizzano sensori, attuatori e comunicazione con altri dispositivi.
![2](/IMAGE/2.jpg)


**Sensore dht22** = Rileva Umidità(%) e Temperatura(C)
![3](/IMAGE/3.jpg)
                                                           
**Sensore Luminosità** = Rileva Umidità(%) e Temperatura(C)
![4](/IMAGE/4.jpg)



**Scheda RFID** =   Lettore Schede magnetiche





![5](/IMAGE/5.jpg)



**Wemos D1 MINI** =Il Modulo WeMos D1 mini è basato sul microcontrollore Wi-Fi ESP8266 ESP-12F che può essere programmato utilizzando l&#39;IDE di Arduino oppure NodeMCU. La semplicità della programmazione che può essere effettuata anche in modalità wireless e l&#39;ampia disponibilità di shield aggiuntivi permettono di sviluppare il proprio progetto di &quot;Internet delle cose&quot; in tempi estremamente rapidi.
![6](/IMAGE/6.jpg)






## **SOFTWARE:**

* **Node-RED** è un software open source per programmare online contemporaneamente ad altre persone sullo stesso hardware creando dei &quot;flow&quot; a blocchi sfruttando principalmente Javascript, MQTT e JSON.

* **Emoncms.org** è una piattaforma online  per chiunque sia interessato alla programmazione ma soprattutto per l&#39;elaborazione e visualizzazione tramite dashboard e grafici di dati in input come energia, luminosità, temperatura ed in generale dati ambientali.

![7](/IMAGE/7.png)
![8](/IMAGE/8.png)

Per salvare ed elaborare i dati provenienti da alcuni sensori abbiamo usufruito di EMONCMS che, in primo luogo, ci ha permesso di salvare i dati in un server gratuito e di poterli rivedere tramite la sezione &quot;inputs&quot;; in secondo luogo di creare delle &quot;dashboards&quot;, ovvero delle schermate che ti permettono di monitorare in tempo reale l&#39;andamento dei report.


# 1) Dati in arrivo dal sensore

![9](/IMAGE/9.png)


Tramite il &quot;flow&quot; in sovraimpressione, prima rivisto e spiegato, arrivano i dati al sensore nel database, qui vengono gestiti e raggruppati in sezioni. Nel nostro caso abbiamo diviso i dati in input in:

* Luminosità
* Temperatura
* Umidità

I dati, qualora il sensore fosse sempre attivo, vengono cambiati in tempo reale e sono visibili nella sezione &quot;inputs&quot; di Emoncms.


Avendo utilizzato 2 sensori, come si può vedere, abbiamo le 3 sezioni per entrambi i sensori, con differenti valori.
![10](/IMAGE/10.png)
#

# 2) Feeds
![12](/IMAGE/12.png)
Le feeds gestiscono la memorizzazione dei dati degli input e si occupano di passarli al modulo successivo. Sempre all&#39;interno di questo modulo si può visualizza l&#39;attività di invio dei dati

#  3) Dashboards e visualizzazione finale dei dati
![11](/IMAGE/11.png)
#

Come potete vedere dall&#39;immagine soprastante, tramite l&#39;utilizzo delle dashboards si è potuti ad arrivare ad un risultato grafico dei dati arrivati in input. Queste dashboards però non sono esportabili, e sono visibili soltanto nel caso in cui si è nella stessa wifi della raspberry e si ha l&#39;account ad emoncms relativo.

Anche in questo caso i dati cambiano in tempo reale a sensore attivo.
