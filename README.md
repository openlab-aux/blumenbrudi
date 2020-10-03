# blumenbrudi
blumenbrudi muss nie weg

## Motivation
Einige Mitglieder und Freund*Innen des OpenLabs hatten unabhängig
voneinander Überlegungen und Versuche zur Überwachung und
automatischen Erhaltung von Pflanzen angestellt.

Um das Lernen für alle schneller, spaßiger und zielstrebiger zu
machen, haben wir ein mobiles (rollbares) Test-Rack dafür
aufgebaut. Wenn dich das Thema interessiert, bist du eingeladen mit zu
basteln. Komm einfach im [Chat](https://openlab-augsburg.de/chat/) oder im OpenLab vorbei.

Als schönen Nebeneffekt, könnten wir mit etwas Glück endlich lebende
Pflanzen im Lab haben. :)

## Verwendete Komponenten
Für das Projekt sollen günstige Hardware und Software verwendet
werden, welche quelloffen verfügbar sind. Die Espressif Platform wird
diesem Anspruch leider nicht ganz gerecht, scheint aber ein guter
Kompromiss zu sein.

### pflanzenlicht.local: Heizung und Beleuchtung
Die Niederspannungskomponenten des Projekts werden über einen Sonoff
4CH Pro R2 mit einer esphome firmware gesteuert. Aktuell sind sowohl
die protobuf-, als auch die HTTP-API (ohne Authentifizierung)
aktiviert. Der Status kann ebenfalls über einen prometheus endpoint
ausgelesen werden.

Als Pflanzenlicht sind drei [VÄXER
Pflanzenlicht-Lampen](https://www.ikea.com/de/de/p/vaexer-led-pflanzenlampe-par30-e27-60317483/)
einzeln über Relais schaltbar. Die Lampenfassungen sind an Ketten
befestigt und können durch ein Umhängen des aufgebrochenen
Kettenglieds in der Höhe/Position verstellt werden.

Das vierte Relais im Sonoff 4CH wird zum schalten einer günstigen
Heizmatte aus dem Terrariumbedarf verwendet, welche bei der Anzucht
von Chilli-Pflanzen hilfreich sein dürfte.

### gaertnerbot.local: Luft- und Boden-Sensoren, Bewässerung
  - ESP8266/ESP32-Board
  - BME280
  - Dallas Temperatur-Sensoren
  - Chirp!-Erdfeuchte-Sensoren
  - Motorcontroller
  - Pumpe
  - LED-Ampel

### Steuerung und Metriken
  - homeassistant
  - bee-integrationen dokumentieren
  - prometheus + grafana (läuft eh schon auf luke?)
