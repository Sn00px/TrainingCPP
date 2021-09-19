#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace dzrnic {

struct Particle {
        double m_x;
        double m_y;

public:
        Particle();
        virtual ~Particle();
};

} /* namespace dzrnic */

#endif /* PARTICLE_H_ */
