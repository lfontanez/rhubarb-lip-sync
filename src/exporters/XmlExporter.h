#pragma once

#include "Exporter.h"

class XmlExporter : public Exporter {
public:
	void exportShapes(const boost::filesystem::path& inputFilePath, const ContinuousTimeline<Shape>& shapes, std::ostream& outputStream) override;
};
